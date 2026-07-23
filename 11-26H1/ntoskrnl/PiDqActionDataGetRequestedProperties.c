/*
 * XREFs of PiDqActionDataGetRequestedProperties @ 0x14095E124
 * Callers:
 *     PiDqActionDataCreate @ 0x14095124C (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14095D088 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x14095D7B0 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqActionDataGetRequestedProperties(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 *a8,
        _DWORD *a9)
{
  int v9; // ebx
  int v10; // r15d
  __int64 Pool2; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebp
  __int64 v14; // rsi
  char *v15; // r8
  __int64 v16; // rdi
  __int64 v17; // r9
  int v18; // eax
  __int128 v20; // xmm1
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  PVOID P[8]; // [rsp+48h] [rbp-40h] BYREF

  v9 = 0;
  v10 = a2;
  Handle = 0LL;
  P[0] = 0LL;
  *a9 = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  *a8 = Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_10;
  }
  PiPnpRtlBeginOperation(P, v12);
  v13 = 0;
  if ( !a7 )
    goto LABEL_10;
  v14 = a6 + 20;
  while ( 1 )
  {
    v15 = 0LL;
    v16 = *a8 + 48LL * (unsigned int)*a9;
    if ( !*(_DWORD *)v14 )
      goto LABEL_5;
    if ( *(_DWORD *)v14 != 1 )
      break;
    v10 = 0;
    if ( !Handle )
    {
      Handle = 0LL;
      v9 = PiDqOpenUserObjectRegKey(a3, a2, 1u, 0, a1, &Handle);
      if ( v9 == -1073741772 )
      {
        v9 = 0;
        Handle = (HANDLE)-1LL;
      }
    }
    if ( Handle == (HANDLE)-1LL )
    {
      *(_OWORD *)v16 = *(_OWORD *)(v14 - 20);
      v20 = *(_OWORD *)(v14 - 4);
      *(_QWORD *)(v16 + 32) = 0LL;
      *(_QWORD *)(v16 + 40) = 0LL;
      *(_OWORD *)(v16 + 16) = v20;
      goto LABEL_9;
    }
    v15 = (char *)Handle;
LABEL_5:
    if ( v9 < 0 )
      goto LABEL_10;
    v17 = a6 + 32LL * v13;
    v18 = a4
        ? PiDqPnPGetObjectPropertyInBestLocale(a3, v10, v15, v17, *(_DWORD *)v14, a5)
        : PiDqPnPGetObjectProperty(a3, v10, (__int64)v15, v17, *(_DWORD *)v14, *(_WORD **)(v14 + 4), v16);
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_10;
LABEL_9:
    ++*a9;
    ++v13;
    v14 += 32LL;
    if ( v13 >= a7 )
      goto LABEL_10;
    v10 = a2;
  }
  v9 = -1073741811;
LABEL_10:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P[0] )
    PiPnpRtlEndOperation(P[0]);
  return (unsigned int)v9;
}
