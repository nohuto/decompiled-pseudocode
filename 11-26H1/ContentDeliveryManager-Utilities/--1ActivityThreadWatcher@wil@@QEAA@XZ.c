/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18007C6DC
 * Callers:
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::operator() @ 0x18007C934 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--operator().c)
 *     __lambda_0f325790d88d3e0e1d8faff7704602cc_::operator()_::_1_::dtor$1 @ 0x1800BC454 (__lambda_0f325790d88d3e0e1d8faff7704602cc_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18004D1D8 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::ActivityThreadWatcher::~ActivityThreadWatcher(wil::ActivityThreadWatcher *this)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::ActivityThreadWatcher *)((char *)this + 32));
  wil::details::StoredCallContextInfo::ClearMessage(this);
}
