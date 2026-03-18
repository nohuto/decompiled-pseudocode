/*
 * XREFs of ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x14034F208
 * Callers:
 *     DxgkCreateHwQueueInternal @ 0x14034EA38 (DxgkCreateHwQueueInternal.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14036E800 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x14003CCD8 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x14005C5B4 (--2-$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGHWQUEUE@@IEAA@PEAVDXGCONTEXT@@@Z @ 0x14034F484 (--0DXGHWQUEUE@@IEAA@PEAVDXGCONTEXT@@@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x14034F800 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A7D80 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CreateHwQueue(
        DXGCONTEXT *this,
        struct _D3DKMT_CREATEHWQUEUE *a2,
        void *a3,
        struct DXGHWQUEUE **a4)
{
  __int64 v5; // rcx
  DXGHWQUEUE *v9; // rax
  struct DXGHWQUEUE *v10; // rax
  int v11; // esi
  DXGHWQUEUE *v12; // rax
  DXGHWQUEUE **v13; // rcx
  __int64 v14; // rdx

  v5 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v5 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 136)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 948;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      948LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 949;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      949LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 950;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HwQueue != NULL", 950LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = (DXGHWQUEUE *)DXGQUOTAALLOCATOR<64,1265072196>::operator new(256LL);
  if ( !v9 )
  {
    *a4 = 0LL;
    goto LABEL_17;
  }
  v10 = DXGHWQUEUE::DXGHWQUEUE(v9, this);
  *a4 = v10;
  if ( !v10 )
  {
LABEL_17:
    v11 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 962;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2504LL) & 0x800) != 0
    || *((_BYTE *)DXGGLOBAL::GetGlobal() + 305952) )
  {
    a2->Flags.Value |= 0x20u;
  }
  v11 = DXGHWQUEUE::Initialize(*a4, a2, a3);
  if ( v11 >= 0 )
  {
    v12 = *a4;
    v13 = (DXGHWQUEUE **)((char *)this + 400);
    v14 = *((_QWORD *)this + 50);
    if ( *(DXGCONTEXT **)(v14 + 8) != (DXGCONTEXT *)((char *)this + 400) )
      __fastfail(3u);
    *(_QWORD *)v12 = v14;
    *((_QWORD *)v12 + 1) = v13;
    *(_QWORD *)(v14 + 8) = v12;
    *v13 = v12;
    _InterlockedIncrement64((volatile signed __int64 *)this + 4);
    return 0LL;
  }
LABEL_18:
  if ( *a4 )
  {
    DXGHWQUEUE::DestroyCoreState(*a4, 0LL);
    if ( *a4 )
      DXGHWQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v11;
}
