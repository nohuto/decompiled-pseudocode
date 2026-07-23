/*
 * XREFs of PnpAllocateAndEnableEventWatchdog @ 0x140A19AB0
 * Callers:
 *     PnpDeviceEventWorker @ 0x140A1A040 (PnpDeviceEventWorker.c)
 * Callees:
 *     RtlUnicodeStringCopyString @ 0x14047E504 (RtlUnicodeStringCopyString.c)
 *     PnpEnableWatchdog @ 0x140A19C80 (PnpEnableWatchdog.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpAllocateAndEnableEventWatchdog(__int64 a1)
{
  int v1; // edx
  __int64 v3; // r14
  _OWORD *v4; // r15
  const wchar_t *v5; // rbp
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int16 v11; // di
  __int64 Pool2; // rax
  _QWORD *v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  int v19; // edx
  int v20; // edx

  v1 = *(_DWORD *)(a1 + 136);
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( v1 == 7 )
  {
    v4 = (_OWORD *)(a1 + 168);
    goto LABEL_28;
  }
  if ( v1 > 7 )
  {
    v19 = v1 - 8;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( (unsigned int)(v20 - 1) > 1 )
          goto LABEL_28;
      }
    }
LABEL_30:
    v9 = 168LL;
    goto LABEL_7;
  }
  v6 = v1 - 1;
  if ( !v6 )
    goto LABEL_30;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v4 = (_OWORD *)(a1 + 168);
    v9 = 184LL;
    goto LABEL_7;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = 176LL;
    goto LABEL_7;
  }
  v18 = v8 - 1;
  if ( !v18 )
    goto LABEL_30;
  if ( v18 != 2 )
    goto LABEL_28;
  v9 = 172LL;
LABEL_7:
  v5 = (const wchar_t *)(a1 + v9);
  if ( !(a1 + v9) )
  {
LABEL_28:
    v11 = 0;
    goto LABEL_11;
  }
  v10 = -1LL;
  do
    ++v10;
  while ( v5[v10] );
  v11 = 2 * (v10 + 1);
LABEL_11:
  Pool2 = ExAllocatePool2(0x40uLL);
  v13 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(a1 + 160);
    *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(Pool2 + 20) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(a1 + 20);
    *(_OWORD *)(Pool2 + 28) = *(_OWORD *)(a1 + 120);
    if ( v4 )
      *(_OWORD *)(Pool2 + 44) = *v4;
    if ( v5
      && (*(_WORD *)(Pool2 + 66) = v11,
          *(_QWORD *)(Pool2 + 72) = Pool2 + 80,
          RtlUnicodeStringCopyString((PUNICODE_STRING)(Pool2 + 64), v5) < 0)
      || ((v15 = *(_QWORD *)(a1 + 160)) == 0 ? (v16 = 0LL) : (v16 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL)),
          v17 = PnpEnableWatchdog(1LL, v13, (v16 + 56) & -(__int64)(v16 != 0)),
          (v3 = v17) == 0) )
    {
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      *v13 = v17;
    }
  }
  return v3;
}
