/*
 * XREFs of ??1TaskStack@details@Concurrency@@QEAA@XZ_1 @ 0x180075AC0
 * Callers:
 *     sub_1800DCDCB @ 0x1800DCDCB (sub_1800DCDCB.c)
 *     sub_1800E5407 @ 0x1800E5407 (sub_1800E5407.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

void __fastcall Concurrency::details::TaskStack::~TaskStack(Concurrency::details::TaskStack *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    sub_180010EC8(v1);
}
