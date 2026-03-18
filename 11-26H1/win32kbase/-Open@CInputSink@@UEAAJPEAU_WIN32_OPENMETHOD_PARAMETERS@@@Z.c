/*
 * XREFs of ?Open@CInputSink@@UEAAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1401371B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputSink::Open(CInputSink *this, struct _WIN32_OPENMETHOD_PARAMETERS *a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx

  v3 = *((_QWORD *)a2 + 3);
  v4 = 0;
  if ( (!v3 || v3 != *(_QWORD *)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3) + 70544))
    && *((_QWORD *)a2 + 3) != *((_QWORD *)this + 4) )
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
