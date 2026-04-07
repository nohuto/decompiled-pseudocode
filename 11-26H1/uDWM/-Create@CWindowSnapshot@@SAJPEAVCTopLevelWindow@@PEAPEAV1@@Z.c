/*
 * XREFs of ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18003457C
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18003416C (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z @ 0x180088260 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnSnapshotStart@CTopLevelWindow@@QEAAXXZ @ 0x18003464C (-OnSnapshotStart@CTopLevelWindow@@QEAAXXZ.c)
 *     _CWindowSnapshot::Create_::_2_::_lambda_1_::operator() @ 0x18003465C (_CWindowSnapshot--Create_--_2_--_lambda_1_--operator().c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180034670 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     ??0CWindowSnapshot@@IEAA@XZ @ 0x18008BE20 (--0CWindowSnapshot@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowSnapshot::Create(struct CTopLevelWindow *a1, struct CWindowSnapshot **a2)
{
  CWindowSnapshot *v3; // rax
  CWindowSnapshot *v4; // rax
  struct CWindowSnapshot *v5; // rdi
  int v6; // ebx
  unsigned int v8; // eax
  struct CTopLevelWindow **v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct CTopLevelWindow *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  v9 = &v12;
  v10 = 1;
  CTopLevelWindow::OnSnapshotStart(a1);
  v3 = (CWindowSnapshot *)DefaultHeap::AllocClear(0x50uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v4 = CWindowSnapshot::CWindowSnapshot(v3);
  v5 = v4;
  if ( v4 )
  {
    v6 = CWindowSnapshot::Initialize(v4, v12);
    if ( v6 >= 0 )
    {
      *a2 = v5;
      goto LABEL_5;
    }
    v8 = 51;
  }
  else
  {
    v6 = -2147024882;
    v8 = 49;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v8, 0LL);
  if ( v5 )
    CBaseObject::Release(v5);
LABEL_5:
  v10 = 0;
  CWindowSnapshot::Create_::_2_::_lambda_1_::operator()(&v9);
  return (unsigned int)v6;
}
