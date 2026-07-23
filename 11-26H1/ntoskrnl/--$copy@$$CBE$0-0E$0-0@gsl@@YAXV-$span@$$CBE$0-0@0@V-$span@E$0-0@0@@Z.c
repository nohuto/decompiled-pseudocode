/*
 * XREFs of ??$copy@$$CBE$0?0E$0?0@gsl@@YAXV?$span@$$CBE$0?0@0@V?$span@E$0?0@0@@Z @ 0x1404C4544
 * Callers:
 *     RtlCreateFunctionOverrideFixupInfo @ 0x140A6AE10 (RtlCreateFunctionOverrideFixupInfo.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404798A4 (-terminate@details@gsl@@YAXXZ.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void *__fastcall gsl::copy<unsigned char const,-1,unsigned char,-1>(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  size_t v3; // r8
  const void *v4; // r10
  void *Src[2]; // [rsp+20h] [rbp-18h]
  void *Srca[2]; // [rsp+20h] [rbp-18h]

  v2 = *a1;
  if ( *a2 < *a1
    || (*(_OWORD *)Src = *(_OWORD *)a1, v3 = *a1, *a1 == -1LL)
    || (v4 = (const void *)a1[1], !Src[1]) && Src[0]
    || (*(_OWORD *)Srca = *(_OWORD *)a2, *a2 == -1LL)
    || (a1 = (unsigned __int64 *)a2[1], !Srca[1]) && Srca[0]
    || (void *)v2 > Srca[0]
    || v2 == -1LL
    || !Srca[1] && v2 )
  {
    gsl::details::terminate((gsl::details *)a1, (__int64)a2);
    JUMPOUT(0x1404C45C0LL);
  }
  return memmove(Srca[1], v4, v3);
}
