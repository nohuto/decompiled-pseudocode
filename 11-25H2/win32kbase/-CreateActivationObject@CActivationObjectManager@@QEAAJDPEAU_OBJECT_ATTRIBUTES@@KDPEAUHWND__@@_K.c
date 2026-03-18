/*
 * XREFs of ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1400E3C64
 * Callers:
 *     NtUserCreateActivationObject @ 0x14012ED30 (NtUserCreateActivationObject.c)
 * Callees:
 *     UserDereferenceDwmProcess @ 0x140057B50 (UserDereferenceDwmProcess.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAPEAV1@@Z @ 0x1400E3D88 (-Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAPEAV1@@Z.c)
 *     _HMPkheFromObjectWorker @ 0x1400E3FE8 (_HMPkheFromObjectWorker.c)
 *     ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1400E401C (-AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E42F4 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 */

__int64 __fastcall CActivationObjectManager::CreateActivationObject(
        CActivationObjectManager *this,
        __int64 a2,
        struct _OBJECT_ATTRIBUTES *a3,
        __int64 a4,
        char a5,
        HWND a6,
        unsigned __int64 a7,
        struct _LUID *a8)
{
  HWND v8; // rsi
  int v10; // edi
  __int64 v11; // rax
  struct tagTHREADINFO *v12; // rbx
  struct _OBJECT_ATTRIBUTES *v13; // rdx
  char v14; // cl
  unsigned int v15; // r8d
  char v16; // r9
  struct CActivationObject *v17; // rsi
  struct _LUID v18; // rcx
  HWND v20; // [rsp+20h] [rbp-68h]
  unsigned __int64 v21; // [rsp+28h] [rbp-60h]
  struct CActivationObject **v22; // [rsp+30h] [rbp-58h]
  __int128 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]
  int v25; // [rsp+58h] [rbp-30h]
  __int64 v26; // [rsp+70h] [rbp-18h]
  struct CActivationObject *v27; // [rsp+A0h] [rbp+18h] BYREF

  v27 = (struct CActivationObject *)a3;
  v8 = a6;
  v10 = -1073741811;
  v11 = HMValidateHandleNoSecure((int)a6, 255);
  if ( v11 )
  {
    v12 = *(struct tagTHREADINFO **)(HMPkheFromObjectWorker(v11) + 8);
    if ( v12 == PtiCurrent() )
    {
      v27 = 0LL;
      v10 = CActivationObject::Create(v14, v13, v15, v16, v8, a7, &v27);
      if ( v10 >= 0 )
      {
        CPushLock::AcquireLockExclusive((CActivationObjectManager *)((char *)this + 16));
        v17 = v27;
        v10 = CActivationObjectManager::AddActivationObjectToHashTable(this, v27);
        if ( v10 >= 0 )
        {
          v18 = (struct _LUID)*((_QWORD *)v17 + 5);
          v23 = 0LL;
          *a8 = v18;
          v26 = 0LL;
          v24 = 0LL;
          v25 = 0;
          CActivationObjectManager::NotifySystemSateChanged(v18, v17, 0LL, &v23, v20, v21, v22);
        }
        CPushLock::ReleaseLock((CActivationObjectManager *)((char *)this + 16));
        if ( v10 < 0 )
          UserDereferenceDwmProcess(v17);
      }
    }
  }
  return (unsigned int)v10;
}
