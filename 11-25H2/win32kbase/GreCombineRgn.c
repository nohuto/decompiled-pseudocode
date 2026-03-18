/*
 * XREFs of GreCombineRgn @ 0x14000DFC0
 * Callers:
 *     NtGdiCombineRgn @ 0x14000DFA0 (NtGdiCombineRgn.c)
 *     UserValidateCopyRgn @ 0x14006EC40 (UserValidateCopyRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140089AC0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     UserSetDCVisRgn @ 0x14008A8F0 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x14000DD20 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x14000DEB0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x14000E530 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x14000E9F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14000EB2C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EB3C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x14000EB90 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140016730 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  __int64 v8; // rax
  unsigned int v9; // edi
  const struct REGION_CORE *v10; // r8
  RGNOBJAPI *v11; // rcx
  RGNOBJ *v13; // rcx
  unsigned int sizeScan; // eax
  unsigned int v15; // edx
  const struct REGION_CORE *v16; // r8
  int v17; // esi
  int v18; // edi
  __int64 v19; // [rsp+28h] [rbp-69h] BYREF
  _QWORD v20[7]; // [rsp+30h] [rbp-61h] BYREF
  _QWORD v21[7]; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v22[7]; // [rsp+A0h] [rbp+Fh] BYREF

  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 != 5 )
    {
      if ( a1 != a2 && a1 != a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v22, a2, 1, 0);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a3, 1, 0);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a1, 0, 1);
        if ( v22[0] && v21[0] && v20[0] )
        {
          sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(v20[0] + 24LL));
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(
            &v19,
            sizeScan);
          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, v15);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
          if ( v19
            && (RGNOBJ::vCopy((RGNOBJ *)&v19, (struct RGNOBJ *)v20, v16),
                (v17 = RGNOBJ::iCombine((RGNOBJ *)&v19, (struct RGNOBJ *)v22, (struct RGNOBJ *)v21, a4)) != 0) )
          {
            v18 = (unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)v20, (struct RGNOBJ *)&v19) != 0 ? v17 : 0;
          }
          else
          {
            v18 = 0;
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
          if ( v18 )
          {
            v9 = RGNOBJ::iComplexity((RGNOBJ *)v20);
            goto LABEL_36;
          }
        }
        else
        {
          EngSetLastError(6u);
        }
        v9 = 0;
LABEL_36:
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
        v11 = (RGNOBJAPI *)v22;
        goto LABEL_17;
      }
      if ( a2 != a3 )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(
          &v19,
          a2);
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a2, 0, a1 == a2);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a3, 0, a1 == a3);
        if ( v19 )
        {
          v8 = v20[0];
          if ( !v20[0] )
          {
LABEL_9:
            EngSetLastError(6u);
LABEL_10:
            v9 = 0;
LABEL_26:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
            if ( v19 )
              PopThreadGuardedObject(v19 + 80);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
            return v9;
          }
          if ( !v21[0] )
          {
LABEL_7:
            if ( v8 && v21[0] )
              goto LABEL_10;
            goto LABEL_9;
          }
          if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v19, (struct RGNOBJ *)v20, (struct RGNOBJ *)v21, a4) )
          {
            if ( a1 == a2 )
            {
              if ( !(unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)v20, (struct RGNOBJ *)&v19) )
                goto LABEL_10;
              v13 = (RGNOBJ *)v20;
            }
            else
            {
              if ( !(unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)v21, (struct RGNOBJ *)&v19) )
                goto LABEL_10;
              v13 = (RGNOBJ *)v21;
            }
            v9 = RGNOBJ::iComplexity(v13);
            goto LABEL_26;
          }
        }
        v8 = v20[0];
        goto LABEL_7;
      }
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a1, 0, 1);
      if ( v20[0] )
      {
        if ( (unsigned int)(a4 - 3) <= 1 )
          RGNOBJ::vSet((RGNOBJ *)v20);
        v9 = RGNOBJ::iComplexity((RGNOBJ *)v20);
      }
      else
      {
        EngSetLastError(6u);
        v9 = 0;
      }
LABEL_16:
      v11 = (RGNOBJAPI *)v20;
LABEL_17:
      RGNOBJAPI::~RGNOBJAPI(v11);
      return v9;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a1, 0, 1);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a2, 1, 0);
    if ( v21[0] && v20[0] )
    {
      if ( (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v20, (struct RGNOBJ *)v21, v10) )
      {
        v9 = RGNOBJ::iComplexity((RGNOBJ *)v20);
        goto LABEL_15;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    v9 = 0;
LABEL_15:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
    goto LABEL_16;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
