/*
 * XREFs of ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x1402229E0
 * Callers:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x140222990 (--1CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140160B14 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::~MouseInterceptState(
        char **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v4 = this + 13;
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(this + 13, a2, a3, a4);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(v4, v5, v6, v7);
}
