/*
 * XREFs of ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x14015E180
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1401519B8 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x14019F270 (-ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CInertiaManager::RouteSyntheticTouchpadToMT(
        CInertiaManager *this,
        int a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        unsigned __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  _QWORD v12[34]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+130h] [rbp+30h] BYREF
  __int64 v14; // [rsp+140h] [rbp+40h]
  _BYTE v15[112]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v16; // [rsp+1B8h] [rbp+B8h]
  _QWORD v17[26]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v18[112]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v19; // [rsp+300h] [rbp+200h]
  __int64 v20; // [rsp+308h] [rbp+208h]

  memset(v12, 0, 0x108uLL);
  v14 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  memset(v15, 0, sizeof(v15));
  memset(v17, 0, sizeof(v17));
  v19 = 0LL;
  memset(v18, 0, sizeof(v18));
  v20 = 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  LODWORD(v12[6]) = 1;
  v11 = *(_QWORD *)(UserSessionState + 3256);
  DWORD1(v13) |= 0x180u;
  v12[30] = &v13;
  v12[0] = v11;
  LODWORD(v17[3]) = 5;
  LODWORD(v13) = v13 & 0xFFFFF3FF | 0x400;
  HIDWORD(v17[25]) = a5;
  HIDWORD(v17[4]) = 0x800000;
  v17[9] = a3;
  v17[7] = a3;
  v17[10] = a4;
  v17[8] = a4;
  LODWORD(v17[12]) = a2;
  CTouchProcessor::ForwardInertiaFrameToManipulationThread((const struct CPointerInputFrame *)v12);
  CInputDest::~CInputDest((CInputDest *)v18);
  CInputDest::~CInputDest((CInputDest *)v15);
}
