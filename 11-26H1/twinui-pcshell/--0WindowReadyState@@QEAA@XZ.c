/*
 * XREFs of ??0WindowReadyState@@QEAA@XZ @ 0x18042C294
 * Callers:
 *     ??0UwpWindowWrapperBase@@QEAA@XZ @ 0x1801E7EA0 (--0UwpWindowWrapperBase@@QEAA@XZ.c)
 *     ??0WindowWrapperBase@@QEAA@XZ @ 0x18042C2B8 (--0WindowWrapperBase@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

WindowReadyState *__fastcall WindowReadyState::WindowReadyState(WindowReadyState *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 12) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  return this;
}
