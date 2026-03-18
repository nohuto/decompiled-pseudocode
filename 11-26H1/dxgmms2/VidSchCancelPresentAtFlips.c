/*
 * XREFs of VidSchCancelPresentAtFlips @ 0x140040840
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x140002780 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x140040AC4 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x140041204 (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14004B08C (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qqxxqxqqqq_EtwWriteTransfer @ 0x140056390 (McTemplateK0qqxxqxqqqq_EtwWriteTransfer.c)
 *     ?VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z @ 0x14005A010 (-VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall VidSchCancelPresentAtFlips(
        struct _VIDSCH_DEVICE *a1,
        struct _LUID a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        HANDLE Handle)
{
  char v12; // di
  NTSTATUS v13; // r14d
  PVOID v14; // rbx
  char v15; // r12
  unsigned int v16; // esi
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  struct _VIDSCH_DEVICE *v21; // r8
  char v22; // r9
  struct _VIDSCH_GLOBAL *v23; // r10
  PVOID Object; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v25; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v26; // [rsp+84h] [rbp-35h] BYREF
  unsigned int v27; // [rsp+88h] [rbp-31h] BYREF
  __int64 v28; // [rsp+90h] [rbp-29h]
  _BYTE v29[4]; // [rsp+98h] [rbp-21h] BYREF
  unsigned int v30; // [rsp+9Ch] [rbp-1Dh]
  unsigned int v31; // [rsp+A0h] [rbp-19h]
  __int64 v32; // [rsp+A8h] [rbp-11h]
  _BYTE v33[40]; // [rsp+B0h] [rbp-9h] BYREF
  LONG HighPart; // [rsp+114h] [rbp+5Bh]

  HighPart = a2.HighPart;
  if ( a5 == 1 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiReprogramVSyncSuppressionForPresent)(a1, a2, a4, a6);
    return 0LL;
  }
  v12 = 0;
  if ( !(unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() || a5 != 2 )
  {
    v15 = -1;
    v28 = *((_QWORD *)a1 + 5);
    a5 = 0;
    v25 = -1;
    v27 = -1;
    v16 = 0;
    v26 = -1;
    LOBYTE(v17) = 0;
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v33, (unsigned __int64 *)(v28 + 2016), 1, 0);
    v19 = 0LL;
    v20 = 0LL;
    LODWORD(v21) = 0;
    while ( 1 )
    {
      if ( v20 > *(int *)(v28 + 3760) )
      {
        v22 = 37;
        goto LABEL_20;
      }
      v18 = *(_QWORD *)(v28 + 3576);
      if ( *(_DWORD *)(v19 + v18 + 112) == 2
        && *(_DWORD *)(v19 + v18) == a2.LowPart
        && *(_DWORD *)(v19 + v18 + 4) == HighPart
        && *(_QWORD *)(v19 + v18 + 8) == a3 )
      {
        break;
      }
      LODWORD(v21) = (_DWORD)v21 + 1;
      ++v20;
      v19 += 160LL;
    }
    LODWORD(Object) = 0;
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v29,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)(160LL * (int)v21 + v18));
    LODWORD(v20) = v31;
    v21 = *(struct _VIDSCH_DEVICE **)(v18 + 152);
    v16 = v30;
    v17 = *(unsigned int *)(v32 + 4LL * v31);
    if ( v21 )
    {
      VidSchiCancelQueuedIndependentFlips(
        v23,
        v30,
        v21,
        *(struct VIDSCH_FLIP_QUEUE **)(*((_QWORD *)v23 + v30 + 431) + 8 * v17 + 40),
        a4,
        &v27,
        &a5,
        &v25,
        &v26);
      v22 = (char)Object;
      v12 = a5;
      v15 = v25;
    }
LABEL_20:
    if ( (byte_14008A204 & 0x20) != 0 )
      McTemplateK0qqxxqxqqqq_EtwWriteTransfer(
        v20,
        v18,
        (_DWORD)v21,
        v16,
        v17,
        a2.LowPart,
        a3,
        v22,
        a4,
        v27,
        v12,
        v15,
        v26);
    AcquireSpinLock::Release((AcquireSpinLock *)v33);
    return 0LL;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( v13 >= 0 )
  {
    VidSchiFlushCompletedPresentsForCompSurf(a1, a2, (struct _KEVENT **)&Object);
    v14 = Object;
    if ( Object )
    {
      KeSetEvent((PRKEVENT)Object, 1, 0);
      ObfDereferenceObject(v14);
    }
  }
  return (unsigned int)v13;
}
