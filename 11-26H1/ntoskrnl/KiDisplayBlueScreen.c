/*
 * XREFs of KiDisplayBlueScreen @ 0x1405EA964
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     RtlStringCbPrintfExA @ 0x140578B4C (RtlStringCbPrintfExA.c)
 *     InbvAcquireDisplayOwnership @ 0x1405C72E0 (InbvAcquireDisplayOwnership.c)
 *     IoSaveBugCheckProgress @ 0x1405C9E10 (IoSaveBugCheckProgress.c)
 *     KeGetBugMessageText @ 0x1405E9A50 (KeGetBugMessageText.c)
 *     KiBugCheckConvertParameterValueToUnicodeString @ 0x1405E9D38 (KiBugCheckConvertParameterValueToUnicodeString.c)
 *     KiDumpParameterImages @ 0x1405EACFC (KiDumpParameterImages.c)
 *     KiHeadlessDisplayString @ 0x1405EAEEC (KiHeadlessDisplayString.c)
 *     HeadlessDispatch @ 0x1406CF8A0 (HeadlessDispatch.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14071CDA4 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071D0FC (BgpFwDisplayBugCheckScreenModernized.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiDisplayBlueScreen(int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  char *v5; // rcx
  char *v6; // rax
  unsigned __int16 v7; // cx
  char *v8; // rdx
  unsigned __int16 v9; // r8
  char *v10; // r9
  __int64 v11; // r10
  __int16 v12; // ax
  int v13; // edi
  unsigned __int16 *v14; // rdi
  unsigned __int16 *v15; // rbx
  char *v16; // rbx
  __int64 v17; // r14
  unsigned __int64 *v18; // rdi
  char *v19; // rbx
  char v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+50h] [rbp-B8h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd_8[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v26; // [rsp+78h] [rbp-90h]
  unsigned __int16 v27; // [rsp+7Ah] [rbp-8Eh]
  char *v28; // [rsp+80h] [rbp-88h]
  char v29; // [rsp+88h] [rbp-80h] BYREF
  char v30; // [rsp+90h] [rbp-78h] BYREF
  char pszDest[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v32; // [rsp+D8h] [rbp-30h] BYREF
  char v33; // [rsp+178h] [rbp+70h] BYREF

  memset_0(&v25, 0, 0x60uLL);
  ppszDestEnd = 0LL;
  v22 = KiBugCheckData;
  v21 = 1;
  *(_OWORD *)ppszDestEnd_8 = 0LL;
  HeadlessDispatch(14LL, 0LL, 0LL);
  HeadlessDispatch(1LL, &v21, 1LL);
  v2 = 4LL;
  HeadlessDispatch(20LL, &v22, 4LL);
  IoSaveBugCheckProgress(129);
  v3 = *(_QWORD *)&KiBugCheckDriver;
  if ( *(_QWORD *)&KiBugCheckDriver || (KiDumpParameterImages(0LL), (v3 = *(_QWORD *)&KiBugCheckDriver) != 0) )
  {
    if ( *(_WORD *)v3 == 30 && !memcmp(*(const void **)(v3 + 8), L"VerifierExt.sys", 0x1EuLL) )
      LODWORD(v3) = 0;
  }
  v4 = 4LL;
  v28 = &v33;
  v5 = &v32;
  v27 = 256;
  v6 = &v29;
  do
  {
    *((_QWORD *)v6 + 1) = v5;
    v5 += 38;
    *(_DWORD *)v6 = 2490404;
    v6 += 16;
    --v4;
  }
  while ( v4 );
  if ( KeGetBugMessageText(KiBugCheckData, (__int64)ppszDestEnd_8) )
  {
    v8 = ppszDestEnd_8[1];
    v7 = (unsigned __int16)ppszDestEnd_8[0];
  }
  else
  {
    RtlStringCbPrintfExA(pszDest, 0xBuLL, &ppszDestEnd, 0LL, 0, "0x%08x", KiBugCheckData);
    v7 = (_WORD)ppszDestEnd - (unsigned __int16)pszDest;
    v8 = pszDest;
  }
  v9 = 0;
  if ( v7 >= (unsigned __int16)((v27 >> 1) - 1) )
    v7 = (v27 >> 1) - 1;
  if ( v7 )
  {
    v10 = v28;
    v9 = v7;
    v11 = v7;
    do
    {
      v12 = *v8++;
      *(_WORD *)v10 = v12;
      v10 += 2;
      --v11;
    }
    while ( v11 );
  }
  v26 = 2 * v9;
  *(_WORD *)&v28[2 * v9] = 0;
  InbvAcquireDisplayOwnership(v9, (__int64)v8);
  IoSaveBugCheckProgress(130);
  v13 = KiBugCheckData;
  v25 = 0LL;
  BgpFwAcquireLock();
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 2) != 0 )
  {
    if ( LOBYTE(gLoadedDiffHivesLock.SchedulerSharedSystemSlot) )
      BgpFwDisplayBugCheckScreenModernized(v13, (unsigned int)&qword_140F4B108, v3, (unsigned int)&v25, a1);
    else
      BgpFwDisplayBugCheckScreen(v13, (unsigned int)&qword_140F4B108, v3, (unsigned int)&v25, a1);
  }
  BgpFwReleaseLock();
  IoSaveBugCheckProgress(128);
  v14 = (unsigned __int16 *)v25;
  if ( (_QWORD)v25 && (v15 = (unsigned __int16 *)*((_QWORD *)&v25 + 1)) != 0LL )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v14 + 1), *v14);
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v15 + 1), *v15);
  }
  else
  {
    v16 = &v29;
    v17 = 4LL;
    v18 = (unsigned __int64 *)&qword_140F4B108;
    do
    {
      KiBugCheckConvertParameterValueToUnicodeString(*v18, (__int64)v16);
      v16 += 16;
      ++v18;
      --v17;
    }
    while ( v17 );
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(v28, v26);
  if ( *(_QWORD *)&KiBugCheckDriver )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(
      *(_QWORD *)(*(_QWORD *)&KiBugCheckDriver + 8LL),
      (unsigned __int16)**(_WORD **)&KiBugCheckDriver);
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(L"\r\n", 6LL);
  v19 = &v30;
  do
  {
    KiHeadlessDisplayString(*(_QWORD *)v19, *((unsigned __int16 *)v19 - 4));
    KiHeadlessDisplayString(L"\r\n", 6LL);
    v19 += 16;
    --v2;
  }
  while ( v2 );
  return KiHeadlessDisplayString(L"\r\n", 6LL);
}
