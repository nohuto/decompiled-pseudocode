/*
 * XREFs of ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x14005426C
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x140054714 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400221BC (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140050234 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x140053F68 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x140054434 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x140054680 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140054C08 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x140069674 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateSystemVisualForCrossChannelVisualChild(
        DirectComposition::CConnection **this,
        int a2,
        struct ResourceHandle *a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rax
  __int64 v6; // rbp
  DirectComposition::CVisualMarshaler *v7; // rax
  DirectComposition::CVisualMarshaler *v8; // rbx
  int SystemResource; // edi
  DirectComposition::CApplicationChannel **v11; // rcx
  DirectComposition::CApplicationChannel *v12; // rdx
  __int64 v13; // rax
  char v14; // [rsp+78h] [rbp+20h] BYREF

  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
         (DirectComposition::CApplicationChannel *)this,
         a2);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v5 + 192LL))(v5);
    if ( v6 )
    {
      v7 = (DirectComposition::CVisualMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                    0x188uLL,
                                                    1668825924LL,
                                                    1);
      v8 = v7;
      if ( v7 )
      {
        DirectComposition::CVisualMarshaler::CVisualMarshaler(v7);
        *(_QWORD *)v8 = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
        *((_DWORD *)v8 + 92) = 0;
        *((_QWORD *)v8 + 48) = (char *)v8 + 376;
        *((_QWORD *)v8 + 47) = (char *)v8 + 376;
        SystemResource = DirectComposition::CVisualMarshaler::Initialize(v8);
        if ( SystemResource >= 0 )
          SystemResource = DirectComposition::CConnection::CreateSystemResource(
                             this[5],
                             0xB6u,
                             (DirectComposition::CVisualMarshaler *)((char *)v8 + 368));
        if ( SystemResource >= 0
          && (SystemResource = DirectComposition::CApplicationChannel::RegisterResource(
                                 (DirectComposition::CApplicationChannel *)this,
                                 v8),
              SystemResource >= 0) )
        {
          v11 = (DirectComposition::CApplicationChannel **)this[35];
          v12 = (DirectComposition::CVisualMarshaler *)((char *)v8 + 376);
          if ( *v11 != (DirectComposition::CApplicationChannel *)(this + 34) )
            __fastfail(3u);
          *((_QWORD *)v8 + 48) = v11;
          *(_QWORD *)v12 = this + 34;
          *v11 = v12;
          this[35] = v12;
          v13 = *(_QWORD *)v8;
          v14 = 0;
          SystemResource = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, DirectComposition::CConnection **, __int64, _QWORD, _QWORD, char *))(v13 + 320))(
                             v8,
                             this,
                             v6,
                             0LL,
                             0LL,
                             &v14);
          if ( SystemResource < 0 )
          {
            DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v8);
          }
          else
          {
            if ( v14 )
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
                (DirectComposition::CApplicationChannel *)this,
                v8);
            DirectComposition::CConnection::ReferenceSystemResource(this[5], *((unsigned int *)v8 + 92));
            *(_DWORD *)a3 = *((_DWORD *)v8 + 92);
          }
        }
        else
        {
          (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, DirectComposition::CConnection **))(*(_QWORD *)v8 + 216LL))(
            v8,
            this);
          (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, __int64))(*(_QWORD *)v8 + 96LL))(v8, 1LL);
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)SystemResource;
}
