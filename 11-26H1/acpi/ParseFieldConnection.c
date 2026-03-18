/*
 * XREFs of ParseFieldConnection @ 0x140054000
 * Callers:
 *     ParseField @ 0x140010AC8 (ParseField.c)
 * Callees:
 *     ParseName @ 0x140006D60 (ParseName.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ParseIntObj @ 0x140009C30 (ParseIntObj.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     ParsePackageLen @ 0x1400309E0 (ParsePackageLen.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ParseFieldConnection(__int64 a1, __int64 **a2)
{
  const void **v2; // rsi
  _BYTE *v3; // rax
  const void *v6; // r13
  bool v7; // zf
  int v8; // eax
  unsigned __int64 v9; // rdi
  const void *v10; // r15
  const void *v11; // rbx
  int v12; // r12d
  int v13; // eax
  char *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 *v17; // rcx
  const void *v18; // rdx
  unsigned int v19; // ecx
  __int64 *v20; // rax
  void *v21; // rcx
  unsigned int v22; // eax
  unsigned __int64 v24; // [rsp+30h] [rbp-178h] BYREF
  __int128 v25; // [rsp+38h] [rbp-170h] BYREF
  __int128 v26; // [rsp+48h] [rbp-160h]
  __int64 v27; // [rsp+58h] [rbp-150h]
  char Src[256]; // [rsp+60h] [rbp-148h] BYREF

  v2 = (const void **)(a1 + 120);
  v27 = 0LL;
  v3 = *(_BYTE **)(a1 + 120);
  v24 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v7 = *v3 == 17;
  v26 = 0LL;
  if ( !v7 )
  {
    v13 = ParseName(a1, (char **)(a1 + 120), Src);
    v11 = (const void *)v13;
    if ( v13 )
    {
      LogError(v13);
      AcpiDiagTraceAmlError(a1, (int)v11);
      PrintDebugMessage(0x29u, v11, 0LL, 0LL, 0LL);
      return (unsigned int)v11;
    }
    v14 = Src;
    v15 = 256LL;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v15;
    }
    while ( v15 );
    LODWORD(v11) = v15 == 0 ? 0xC000000D : 0;
    v16 = (256 - v15) & -(__int64)(v15 != 0);
    if ( v15 )
    {
      if ( v16 > 0x100 )
      {
        v9 = 256LL;
LABEL_18:
        v12 = 1;
        goto LABEL_19;
      }
    }
    else
    {
      v16 = 0LL;
    }
    v9 = v16 + 1;
    goto LABEL_18;
  }
  *v2 = v3 + 1;
  ParsePackageLen((_QWORD *)(a1 + 120), &v24);
  v8 = ParseIntObj(a1, v2, (__int64)&v25, 0);
  v9 = (unsigned int)v26;
  v10 = (const void *)v24;
  v11 = (const void *)v8;
  if ( v8 )
  {
    LogError(v8);
    AcpiDiagTraceAmlError(a1, (int)v11);
    PrintDebugMessage(0x28u, v11, 0LL, 0LL, 0LL);
  }
  else if ( (unsigned __int64)*v2 > v24 || (unsigned int)v26 > (int)v24 - *(_DWORD *)v2 + 1 )
  {
    LogError(-1072431089);
    AcpiDiagTraceAmlError(a1, -1072431089);
    PrintDebugMessage(0x2Au, (const void *)v9, (const void *)(unsigned int)((_DWORD)v10 - *(_DWORD *)v2), 0LL, 0LL);
    LODWORD(v11) = -1072431089;
  }
  v6 = *v2;
  v12 = 2;
  *v2 = v10;
LABEL_19:
  if ( (_DWORD)v11 )
    return (unsigned int)v11;
  v17 = *a2;
  if ( *a2 )
  {
    if ( *((unsigned int *)v17 + 2) >= v9 )
      goto LABEL_29;
    HeapFree(v17);
    *a2 = 0LL;
  }
  if ( v9 > 0xFFFFFFEF )
  {
    LODWORD(v11) = -1072431089;
    LogError(-1072431089);
    AcpiDiagTraceAmlError(a1, -1072431089);
    v18 = (const void *)v9;
    v19 = 39;
LABEL_27:
    PrintDebugMessage(v19, v18, 0LL, 0LL, 0LL);
    goto LABEL_29;
  }
  v20 = HeapAlloc(*(_QWORD **)(a1 + 320), 1314407240, (int)v9 + 16);
  *a2 = v20;
  if ( !v20 )
  {
    LODWORD(v11) = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v18 = 0LL;
    v19 = 126;
    goto LABEL_27;
  }
  *((_DWORD *)v20 + 2) = v9;
LABEL_29:
  if ( *a2 )
  {
    *((_DWORD *)*a2 + 3) = v9;
    *(_DWORD *)*a2 = v12;
    v21 = *a2 + 2;
    v22 = *((_DWORD *)*a2 + 3);
    if ( v12 == 2 )
    {
      memmove(v21, v6, v22);
    }
    else
    {
      memmove(v21, Src, v22 - 1);
      *((_BYTE *)*a2 + (unsigned int)(*((_DWORD *)*a2 + 3) - 1) + 16) = 0;
    }
  }
  return (unsigned int)v11;
}
