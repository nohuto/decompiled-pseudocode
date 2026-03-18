/*
 * XREFs of ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x14021F238
 * Callers:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x14021F1E8 (--1CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401D0C0C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::~MouseInterceptState(char **this)
{
  char **v1; // rbx

  v1 = this + 13;
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(this + 13);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(v1);
}
