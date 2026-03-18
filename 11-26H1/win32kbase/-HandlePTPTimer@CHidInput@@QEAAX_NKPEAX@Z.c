/*
 * XREFs of ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x14016E9C0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1401AFE10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHidInput::HandlePTPTimer(CHidInput *this, char a2, int a3, void *a4)
{
  void *v4; // r10
  union _LARGE_INTEGER v7; // [rsp+50h] [rbp+8h] BYREF

  v4 = (void *)*((_QWORD *)this + 53);
  if ( a2 )
  {
    ZwCancelTimer(*((HANDLE *)this + 53), 0LL);
  }
  else
  {
    v7.QuadPart = -10000LL * a3;
    ZwSetTimer(v4, &v7, 0LL, 0LL, 0, 0, 0LL);
    *((_QWORD *)this + 167) = a4;
  }
}
