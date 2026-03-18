/*
 * XREFs of ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140055954
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x140055008 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140055258 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Initialize@CCrossChannelChildVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@@Z @ 0x140055B08 (-Initialize@CCrossChannelChildVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x140056D6C (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400ABF84 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400ABFFC (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateSystemVisualForCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct ResourceHandle *a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rax
  __int64 v6; // rbp
  DirectComposition::CVisualMarshaler *v7; // rax
  DirectComposition::CVisualMarshaler *v8; // rbx
  int v9; // edi
  DirectComposition::CApplicationChannel **v11; // rcx
  DirectComposition::CApplicationChannel *v12; // rdx
  __int64 v13; // rax
  char v14; // [rsp+78h] [rbp+20h] BYREF

  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v5 + 184LL))(v5);
    if ( v6 )
    {
      v7 = (DirectComposition::CVisualMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                    0x168uLL,
                                                    0x63784344u,
                                                    1);
      v8 = v7;
      if ( v7 )
      {
        DirectComposition::CVisualMarshaler::CVisualMarshaler(v7);
        *(_QWORD *)v8 = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
        *((_DWORD *)v8 + 84) = 0;
        *((_QWORD *)v8 + 44) = (char *)v8 + 344;
        *((_QWORD *)v8 + 43) = (char *)v8 + 344;
        v9 = DirectComposition::CCrossChannelChildVisualMarshaler::Initialize(v8, this);
        if ( v9 >= 0 && (v9 = DirectComposition::CApplicationChannel::RegisterResource(this, v8), v9 >= 0) )
        {
          v11 = (DirectComposition::CApplicationChannel **)*((_QWORD *)this + 35);
          v12 = (DirectComposition::CVisualMarshaler *)((char *)v8 + 344);
          if ( *v11 != (DirectComposition::CApplicationChannel *)((char *)this + 272) )
            __fastfail(3u);
          *((_QWORD *)v8 + 44) = v11;
          *(_QWORD *)v12 = (char *)this + 272;
          *v11 = v12;
          *((_QWORD *)this + 35) = v12;
          v13 = *(_QWORD *)v8;
          v14 = 0;
          v9 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, DirectComposition::CApplicationChannel *, __int64, _QWORD, _QWORD, char *))(v13 + 328))(
                 v8,
                 this,
                 v6,
                 0LL,
                 0LL,
                 &v14);
          if ( v9 < 0 )
          {
            DirectComposition::CApplicationChannel::ReleaseResource(this, v8);
          }
          else
          {
            if ( v14 )
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v8);
            DirectComposition::CConnection::ReferenceSystemResource(*((_QWORD *)this + 5), *((_DWORD *)v8 + 84));
            *(_DWORD *)a3 = *((_DWORD *)v8 + 84);
          }
        }
        else
        {
          (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v8 + 208LL))(
            v8,
            this);
          (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, __int64))(*(_QWORD *)v8 + 88LL))(v8, 1LL);
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
  return (unsigned int)v9;
}
