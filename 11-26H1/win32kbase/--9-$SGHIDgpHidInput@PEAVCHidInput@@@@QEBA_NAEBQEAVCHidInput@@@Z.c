/*
 * XREFs of ??9?$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x1401889D4
 * Callers:
 *     CHidInput_Destroy @ 0x140219980 (CHidInput_Destroy.c)
 * Callees:
 *     <none>
 */

bool __fastcall SGHIDgpHidInput<CHidInput *>::operator!=(int a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx

  v3 = *a2;
  return *(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 16832) != v3;
}
