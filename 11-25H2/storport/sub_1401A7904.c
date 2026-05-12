/*
 * XREFs of sub_1401A7904 @ 0x1401A7904
 * Callers:
 *     sub_1400642A8 @ 0x1400642A8 (sub_1400642A8.c)
 *     sub_140192F44 @ 0x140192F44 (sub_140192F44.c)
 * Callees:
 *     sub_14013115C @ 0x14013115C (sub_14013115C.c)
 *     sub_1401316E4 @ 0x1401316E4 (sub_1401316E4.c)
 */

__int64 __fastcall sub_1401A7904(__int64 a1, IRP *a2, _QWORD *a3)
{
  __int64 v5; // rbx
  struct _ERESOURCE *v6; // rbp
  _QWORD *v7; // rax
  unsigned int v8; // ebx

  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v5 = sub_14013115C(a1);
  if ( !v5 )
    return 3221225485LL;
  KeEnterCriticalRegion();
  v6 = (struct _ERESOURCE *)(v5 + 24);
  ExAcquireResourceSharedLite((PERESOURCE)(v5 + 24), 1u);
  v7 = sub_1401316E4(v5, a3);
  if ( v7 )
  {
    if ( (v7[4] & 1) != 0 )
    {
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)v7 + 18, 0, 0) < (int)*((unsigned __int16 *)v7 + 17) )
      {
        IoCsqInsertIrp((PIO_CSQ)(v7 + 10), a2, 0LL);
        v8 = 259;
      }
      else
      {
        v8 = -1073741756;
      }
    }
    else
    {
      v8 = -1073741808;
    }
  }
  else
  {
    v8 = -1073741275;
  }
  ExReleaseResourceLite(v6);
  KeLeaveCriticalRegion();
  return v8;
}
