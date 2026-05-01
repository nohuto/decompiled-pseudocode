/*
 * XREFs of ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x180542440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18005B890 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180544400 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1805446EC (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::SetMode(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r13
  int v5; // edx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ecx
  char updated; // al
  int v12; // ecx
  int v13; // eax
  char v14; // al
  int v15; // ecx
  __int128 v16; // xmm0
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  GUID v18; // [rsp+38h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+48h] [rbp-18h] BYREF

  v4 = a1 - 24;
  v5 = *(_DWORD *)(a1 - 24 + 148);
  if ( a2 != v5 )
  {
    v7 = 4;
    if ( v5 != 6 )
      v7 = 0;
    v18 = GUID_NULL;
    if ( v5 == 4
      && (v8 = *(_QWORD *)(a1 + 88)) != 0
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8) )
    {
      v7 |= 8u;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 88);
      if ( v9 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 40LL))(v9, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(a1 + 124) == 1 || *(_DWORD *)(a1 + 124) == 4 )
    {
      *(_DWORD *)(a1 + 308) = MulDiv(
                                *(_DWORD *)(a1 + 152) - *(_DWORD *)(a1 + 200),
                                100,
                                *(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 200));
      v18 = (GUID)xmmword_1807B5D70;
    }
    v10 = *(_DWORD *)(a1 + 124);
    if ( !a2 )
    {
      *(_BYTE *)(a1 + 254) = 0;
      if ( v10 == 5 || v10 == 6 )
      {
        *(_DWORD *)(a1 + 308) = MulDiv(
                                  *(_DWORD *)(a1 + 152) - *(_DWORD *)(a1 + 216),
                                  100,
                                  *(_DWORD *)(a1 + 224) - *(_DWORD *)(a1 + 216));
      }
      else if ( v10 == 2 )
      {
        v7 |= 2u;
      }
      updated = CDragVisual::_UpdateThumbnailRect(v4);
      v12 = v7 | 1;
      if ( !updated )
        v12 = v7;
      v7 = v12;
      goto LABEL_36;
    }
    if ( a2 == 6 )
    {
      v13 = v7 | 2;
      if ( v10 != 2 )
        v13 = v7;
      v7 = v13;
      goto LABEL_36;
    }
    if ( (!v10 || ((v10 - 4) & 0xFFFFFFFD) == 0) && (unsigned int)(a2 - 2) <= 1 )
    {
      v14 = CDragVisual::_UpdateThumbnailRect(v4);
      v15 = v7 | 1;
      if ( !v14 )
        v15 = v7;
      v7 = v15;
      if ( a2 == 2 )
      {
        v16 = xmmword_1807B5D60;
        v7 = v15 | 2;
LABEL_35:
        v18 = (GUID)v16;
        goto LABEL_36;
      }
      if ( a2 == 3 )
      {
        v16 = xmmword_1807B5D50;
        goto LABEL_35;
      }
    }
LABEL_36:
    *(_DWORD *)(a1 + 124) = a2;
    if ( v7 )
    {
      v17 = *(_QWORD *)(a1 + 48);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher((__int64 *)&v19, &v17, (__int64)&v18, 0LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      CDragVisual::_UpdateThumbnail(v4, 1LL, v7);
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)&v19);
    }
    if ( *(_BYTE *)(a1 + 248) )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McGenEventWrite_EventWriteTransfer(
          MICROSOFT_TWINUI_PUBLISHER_Context,
          &DragVisual_ModeChange_Info,
          a3,
          1u,
          &v19);
    }
    return;
  }
  if ( *(_BYTE *)(a1 + 253) && (unsigned __int8)CDragVisual::_UpdateThumbnailRect(a1 - 24) )
    CDragVisual::_UpdateThumbnail(v4, 4 - (unsigned int)(*(_DWORD *)(a1 + 124) != 6), 1LL);
}
