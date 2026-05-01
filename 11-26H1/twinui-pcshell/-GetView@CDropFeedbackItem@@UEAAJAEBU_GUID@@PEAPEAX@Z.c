/*
 * XREFs of ?GetView@CDropFeedbackItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180546BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyTo@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180092840 (-CopyTo@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::GetView(CDropFeedbackItem *this, const struct _GUID *a2, void **a3)
{
  _QWORD *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (_QWORD *)((char *)this + 40);
  *a3 = 0LL;
  if ( !*v3 )
    return 2147943568LL;
  v4 = Microsoft::WRL::ComPtr<IInspectable>::CopyTo(v3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD4,
    (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedbackitem.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
