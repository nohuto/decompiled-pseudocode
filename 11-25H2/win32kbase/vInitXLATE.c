/*
 * XREFs of vInitXLATE @ 0x1402EAF7C
 * Callers:
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall vInitXLATE(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  _DWORD *v3; // rdi

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  memset((void *)(v1 + 4288), 0, 0x100uLL);
  memset((void *)(v1 + 4552), 0, 0x458uLL);
  *(_DWORD *)(v1 + 4564) = 256;
  *(_DWORD *)(v1 + 4556) = 1;
  *(_DWORD *)(v1 + 4552) = 1;
  *(_QWORD *)(v1 + 4568) = v1 + 4636;
  LODWORD(result) = 0;
  *(_DWORD *)(v1 + 4588) = -2;
  v3 = (_DWORD *)(v1 + 4640);
  do
  {
    result = (unsigned int)(result + 1);
    *v3++ = result;
  }
  while ( (unsigned int)result < 0xFF );
  return result;
}
