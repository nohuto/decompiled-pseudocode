/*
 * XREFs of ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1402219A4
 * Callers:
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x140218ECC (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1401B4D38 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1401B71EC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1401BA300 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1401C37F4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x140225A6C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x14022663C (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

__int64 __fastcall IVRootDeliver::Pointer::SendPTPInertiaInput(
        IVRootDeliver::Pointer *this,
        void *a2,
        int a3,
        const struct CONTAINER_ID *a4)
{
  void *v4; // rdi
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // r8d
  __int64 result; // rax
  struct _UNICODE_STRING v13; // xmm6
  __int64 v14; // r8
  __int64 v15; // r9
  struct _UNICODE_STRING *v16; // rdx
  int v17; // ebx
  struct _UNICODE_STRING *v18; // rsi
  struct _UNICODE_STRING v19; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _UNICODE_STRING *v21; // [rsp+40h] [rbp-30h]

  v4 = 0LL;
  *(_QWORD *)&v19.Length = 0LL;
  UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3);
  if ( !CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 16832) + 1272LL), v10, v11) )
    return 0LL;
  v13 = 0LL;
  if ( this )
  {
    result = RawInputManagerDeviceObjectResolveHandle((char *)this, 3u, a3 == 0, (PVOID *)&v19);
    if ( (int)result < 0 )
      return result;
    v4 = *(void **)&v19.Length;
    v13 = *(struct _UNICODE_STRING *)(*(_QWORD *)&v19.Length + 264LL);
  }
  CIVSerializer::CIVSerializer((__int64)v20, 8);
  v16 = v21;
  v20[0] = &CIVGenericSerializer::`vftable';
  if ( v21 )
  {
    v19 = v13;
    v17 = CIVSerializer::Serialize((CIVSerializer *)v20, v21, &v19, 1);
    if ( v17 >= 0 )
    {
      v17 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v20);
      if ( v17 >= 0 )
      {
        v18 = v21;
        v19 = v13;
        v17 = CIVSerializer::Serialize((CIVSerializer *)v20, v21, &v19, 0);
        if ( v17 >= 0 )
        {
          *(_QWORD *)&v18[1].Length = a2;
          v17 = ivrIVSend((const struct CIVSerializer *)v20, 2u, a4);
        }
      }
    }
  }
  else
  {
    v17 = -1073741801;
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  v20[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v20, (__int64)v16, v14, v15);
  return (unsigned int)v17;
}
