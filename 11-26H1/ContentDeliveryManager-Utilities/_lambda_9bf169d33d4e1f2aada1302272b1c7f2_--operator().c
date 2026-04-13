/*
 * XREFs of _lambda_9bf169d33d4e1f2aada1302272b1c7f2_::operator() @ 0x1800B7A90
 * Callers:
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7f2___ @ 0x1800B7268 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_9bf169d33d4e1f2aada1302272b1c7f2_::operator()(bool **a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  const WCHAR *StringRawBuffer; // rax
  bool v7; // bl
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+48h] [rbp+10h] BYREF

  string = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = v4(a2, &string);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      70LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v5,
      bIgnoreCase);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  **a1 = CompareStringOrdinal(*(LPCWCH *)a1[1], -1, StringRawBuffer, -1, 1) == 2;
  v7 = **a1;
  WindowsDeleteString(string);
  return v7;
}
