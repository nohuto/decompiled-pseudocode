/*
 * XREFs of ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140198440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1400169D0 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002EBE4 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004A0F8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_IsEnabledDeviceUsageNoInline @ 0x14006F834 (Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1401A4CE8 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     TriggerRenderAdapterPairingChangedWnf @ 0x1401D04AC (TriggerRenderAdapterPairingChangedWnf.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x140283948 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1403FA1C4 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkCheckPairedRenderAdapterForStopCallBack(struct DXGADAPTER *this, _BYTE *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // r12d
  unsigned __int64 v6; // rdx
  unsigned int i; // r14d
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // ebx
  struct _LUID *v13; // rdx
  unsigned __int64 v14; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-41h] BYREF
  _BYTE v16[24]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v17[64]; // [rsp+58h] [rbp-19h] BYREF

  v2 = *((_QWORD *)this + 395);
  v5 = *(_DWORD *)(v2 + 96);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v16, this, 1);
  if ( *((_DWORD *)this + 50) == 1 )
  {
    if ( a2[209] && !*((_QWORD *)this + 396) )
    {
      COREACCESS::COREACCESS((COREACCESS *)v17, this);
      COREACCESS::AcquireExclusive((__int64)v17, 1u, 0);
      for ( i = 0; i < v5; ++i )
      {
        VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)v2, i);
        if ( VidPnSourceOwner && *(_BYTE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) == a2 )
        {
          v9 = *(_QWORD *)(v2 + 464);
          v10 = 3040LL * i;
          BLTQUEUE::Flush((BLTQUEUE *)(v10 + *(_QWORD *)(v9 + 8)));
          BLTQUEUE::Reset((BLTQUEUE *)(v10 + *(_QWORD *)(v9 + 8)), 0);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v17, v6);
    }
    v15[0] = 0LL;
    ADAPTER_DISPLAY::GetPairedRenderAdapter((ADAPTER_DISPLAY *)v2, (struct DXGADAPTER_REFERENCE *)v15, 0LL);
    if ( (_BYTE *)v15[0] == a2 )
    {
      v11 = 0;
      if ( v5 )
      {
        while ( !ADAPTER_DISPLAY::IsPartOfDesktop((ADAPTER_DISPLAY *)v2, v11) )
        {
          if ( ++v11 >= v5 )
            goto LABEL_14;
        }
        *(_BYTE *)(v2 + 288) = 1;
        if ( (unsigned int)Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_IsEnabledDeviceUsageNoInline() )
        {
          v14 = 0x200000000LL;
          DXGADAPTER::IsAdapterSessionized(this, v13, 0LL, &v14);
          TriggerRenderAdapterPairingChangedWnf(v14);
        }
      }
      else
      {
LABEL_14:
        ADAPTER_DISPLAY::SetPairedRenderAdapter((ADAPTER_DISPLAY *)v2, 0LL, 0LL);
      }
    }
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v15, 0LL);
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
  return 0LL;
}
