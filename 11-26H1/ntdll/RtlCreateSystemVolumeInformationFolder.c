/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x1800C7AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C7758 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolAllocate @ 0x1800C7D8C (RtlpSysVolAllocate.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800C7DAC (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x1800C7F18 (RtlpSysVolTakeOwnership.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwCreateFile @ 0x18015F9E0 (ZwCreateFile.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlCreateSystemVolumeInformationFolder(unsigned __int16 *a1)
{
  size_t v2; // rax
  unsigned __int16 v3; // bx
  unsigned __int16 v4; // dx
  __int16 v5; // si
  _WORD *v6; // rax
  unsigned int v7; // eax
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rcx
  _WORD v12[2]; // [rsp+60h] [rbp-19h] BYREF
  int v13; // [rsp+64h] [rbp-15h]
  _WORD *v14; // [rsp+68h] [rbp-11h]
  __int128 v15; // [rsp+70h] [rbp-9h] BYREF
  _DWORD v16[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v17; // [rsp+88h] [rbp+Fh]
  _WORD *v18; // [rsp+90h] [rbp+17h]
  int v19; // [rsp+98h] [rbp+1Fh]
  int v20; // [rsp+9Ch] [rbp+23h]
  __int64 v21; // [rsp+A0h] [rbp+27h]
  __int64 v22; // [rsp+A8h] [rbp+2Fh]
  HANDLE Handle; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v25; // [rsp+F0h] [rbp+77h] BYREF

  v13 = 0;
  v25 = 0LL;
  v24 = 0LL;
  v16[1] = 0;
  v20 = 0;
  Handle = 0LL;
  v15 = 0LL;
  v2 = wcslen(L"System Volume Information");
  v3 = 2 * v2;
  if ( 2 * v2 >= 0xFFFE )
    v3 = -4;
  v4 = v3 + *a1;
  v12[0] = v4;
  if ( v4 < *a1 || v4 < v3 )
    return 3221225485LL;
  v5 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2);
  if ( v5 != 92 )
    v4 += 2;
  v12[0] = v4;
  v12[1] = v4 + 2;
  v6 = (_WORD *)RtlpSysVolAllocate((unsigned __int16)(v4 + 2));
  v14 = v6;
  if ( !v6 )
    return 3221225626LL;
  memmove(v6, *((const void **)a1 + 1), *a1);
  v7 = *a1;
  v12[0] = *a1;
  if ( v5 != 92 )
  {
    v14[(unsigned __int64)v7 >> 1] = 92;
    LOWORD(v7) = v12[0] + 2;
    v12[0] += 2;
  }
  memmove((char *)v14 + (unsigned __int16)v7, L"System Volume Information", v3);
  v12[0] += v3;
  v14[(unsigned __int64)v12[0] >> 1] = 0;
  v8 = RtlpSysVolCreateSecurityDescriptor(&v25, &v24);
  if ( v8 < 0 )
  {
    v10 = (__int64)v14;
  }
  else
  {
    v9 = v25;
    v16[0] = 48;
    v17 = 0LL;
    v19 = 576;
    v18 = v12;
    v21 = v25;
    v22 = 0LL;
    if ( (int)ZwCreateFile(&Handle, 0x10000LL, v16, &v15, 0LL, 0, 7, 1, 2101344, 0LL, 0) >= 0 )
      NtClose(Handle);
    v8 = ZwCreateFile(&Handle, 1966080LL, v16, &v15, 0LL, 6, 7, 3, 33, 0LL, 0);
    if ( v8 < 0 )
    {
      RtlpSysVolTakeOwnership(v12);
      v8 = ZwCreateFile(&Handle, 1966080LL, v16, &v15, 0LL, 6, 7, 3, 33, 0LL, 0);
    }
    RtlpSysVolFree((__int64)v14);
    if ( v8 < 0 )
    {
      RtlpSysVolFree(v24);
      v10 = v9;
    }
    else
    {
      RtlpSysVolFree(v9);
      v8 = RtlpSysVolCheckOwnerAndSecurity((__int64)Handle, v24);
      NtClose(Handle);
      v10 = v24;
    }
  }
  RtlpSysVolFree(v10);
  return (unsigned int)v8;
}
