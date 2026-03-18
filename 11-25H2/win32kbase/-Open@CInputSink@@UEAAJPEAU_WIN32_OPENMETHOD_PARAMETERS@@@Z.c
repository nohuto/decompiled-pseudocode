/*
 * XREFs of ?Open@CInputSink@@UEAAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1400CD3E0
 * Callers:
 *     <none>
 * Callees:
 *     UserUnsafeIsProcessDwm @ 0x1400CD430 (UserUnsafeIsProcessDwm.c)
 */

__int64 __fastcall CInputSink::Open(CInputSink *this, struct _WIN32_OPENMETHOD_PARAMETERS *a2)
{
  int IsProcessDwm; // eax
  unsigned int v5; // r8d

  IsProcessDwm = UserUnsafeIsProcessDwm(*((_QWORD *)a2 + 3));
  v5 = 0;
  if ( !IsProcessDwm && *((_QWORD *)a2 + 3) != *((_QWORD *)this + 4) )
    return (unsigned int)-1073741637;
  return v5;
}
