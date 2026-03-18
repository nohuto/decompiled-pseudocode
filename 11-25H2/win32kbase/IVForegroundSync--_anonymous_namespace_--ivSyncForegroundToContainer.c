/*
 * XREFs of IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x14021C020
 * Callers:
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x14021BBEC (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x14019B67C (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x14019C368 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401AD9C0 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1402131E0 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021B160 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer(struct CONTAINER_ID *a1, int a2)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  float *v10; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD *v12; // [rsp+30h] [rbp-19h]
  float v13[16]; // [rsp+50h] [rbp+7h] BYREF
  unsigned __int64 v14; // [rsp+C0h] [rbp+77h] BYREF
  char v15; // [rsp+C8h] [rbp+7Fh] BYREF

  CIVSerializer::CIVSerializer((__int64)v11, 10);
  v4 = v12;
  v11[0] = &CIVGenericSerializer::`vftable';
  if ( v12 )
  {
    *v12 = *((_QWORD *)a1 + 1);
    *((_DWORD *)v4 + 2) = a2;
    memset(v13, 0, sizeof(v13));
    v5 = 0xFFFF8300FFFF8300uLL;
    if ( CDesktopInputSink::GetTransform((struct tagINPUT_TRANSFORM *)v13, v6) )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      v14 = _mm_unpacklo_ps(
              (__m128)COERCE_UNSIGNED_INT((float)*(int *)(UserSessionState + 19184)),
              (__m128)COERCE_UNSIGNED_INT((float)*(int *)(UserSessionState + 19188))).m128_u64[0];
      v10 = (float *)InverseTransformPoint((__int64)&v15, (float *)&v14, v13);
      v14 = __PAIR64__((int)v10[1], (int)*v10);
      v5 = v14;
    }
    *(_QWORD *)((char *)v4 + 12) = v5;
    ivrIVSend((const struct CIVSerializer *)v11, 3LL, a1);
  }
  v11[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v11);
}
