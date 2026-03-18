/*
 * XREFs of ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1401A18E4
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14016DC30 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1401BADF0 (-ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CInertiaManager::RouteSyntheticTouchpadToMT(
        CInertiaManager *this,
        int a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        unsigned __int64 a5)
{
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 UserSessionState; // rax
  __int64 v12; // rcx
  _QWORD v13[34]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+130h] [rbp+30h] BYREF
  __int64 v15; // [rsp+140h] [rbp+40h]
  _BYTE v16[112]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v17; // [rsp+1B8h] [rbp+B8h]
  _QWORD v18[26]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v19[112]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v20; // [rsp+300h] [rbp+200h]
  __int64 v21; // [rsp+308h] [rbp+208h]

  memset(v13, 0, 0x108uLL);
  v15 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  memset(v16, 0, sizeof(v16));
  memset(v18, 0, sizeof(v18));
  v20 = 0LL;
  memset(v19, 0, sizeof(v19));
  v21 = 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8, v10);
  LODWORD(v13[6]) = 1;
  v12 = *(_QWORD *)(UserSessionState + 3256);
  DWORD1(v14) |= 0x180u;
  v13[30] = &v14;
  v13[0] = v12;
  LODWORD(v18[3]) = 5;
  LODWORD(v14) = v14 & 0xFFFFF3FF | 0x400;
  HIDWORD(v18[25]) = a5;
  HIDWORD(v18[4]) = 0x800000;
  v18[9] = a3;
  v18[7] = a3;
  v18[10] = a4;
  v18[8] = a4;
  LODWORD(v18[12]) = a2;
  CTouchProcessor::ForwardInertiaFrameToManipulationThread((const struct CPointerInputFrame *)v13);
  CInputDest::~CInputDest((CInputDest *)v19);
  CInputDest::~CInputDest((CInputDest *)v16);
}
