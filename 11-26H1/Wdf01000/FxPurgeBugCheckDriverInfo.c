/*
 * XREFs of FxPurgeBugCheckDriverInfo @ 0x14007D8E4
 * Callers:
 *     FxDestroy @ 0x1400820E0 (FxDestroy.c)
 * Callees:
 *     memmove @ 0x1400AD500 (memmove.c)
 */

void __fastcall FxPurgeBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // al
  __int64 BugCheckDriverInfoIndex; // rbx
  KIRQL v4; // si
  _FX_DRIVER_GLOBALS **v5; // rcx
  __int64 v6; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_1400C9010);
  BugCheckDriverInfoIndex = FxDriverGlobals->BugCheckDriverInfoIndex;
  v4 = v2;
  if ( (_DWORD)BugCheckDriverInfoIndex )
  {
    if ( qword_1400C9030 )
    {
      if ( (unsigned int)BugCheckDriverInfoIndex < unk_1400C9028 )
      {
        v5 = (_FX_DRIVER_GLOBALS **)((char *)qword_1400C9030 + 56 * BugCheckDriverInfoIndex);
        if ( *v5 == FxDriverGlobals )
        {
          if ( unk_1400C9028 - (_DWORD)BugCheckDriverInfoIndex != 1 )
            memmove(v5, v5 + 7, 56LL * (unsigned int)(unk_1400C9028 - BugCheckDriverInfoIndex - 1));
          if ( (unsigned int)BugCheckDriverInfoIndex < --unk_1400C9028 )
          {
            do
            {
              v6 = (unsigned int)BugCheckDriverInfoIndex;
              LODWORD(BugCheckDriverInfoIndex) = BugCheckDriverInfoIndex + 1;
              --*(_DWORD *)(*((_QWORD *)qword_1400C9030 + 7 * v6) + 356LL);
            }
            while ( (unsigned int)BugCheckDriverInfoIndex < unk_1400C9028 );
          }
        }
      }
    }
  }
  KeReleaseSpinLock(&qword_1400C9010, v4);
}
