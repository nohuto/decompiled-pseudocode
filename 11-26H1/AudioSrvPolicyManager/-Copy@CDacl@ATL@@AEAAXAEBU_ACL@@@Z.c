/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001D3E0
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001C708 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?Clear@CSid@ATL@@AEAAXXZ @ 0x18001DB54 (-Clear@CSid@ATL@@AEAAXXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18001DE30 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18001DEF0 (--1CSid@ATL@@UEAA@XZ.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18001E170 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x18001E294 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001E494 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18002E7BC (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetNull@CAcl@ATL@@QEAAXXZ @ 0x18002E808 (-SetNull@CAcl@ATL@@QEAAXXZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18002ED8C (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x18004A2D4 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     memmove_0 @ 0x18004B850 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // r14
  DWORD v4; // edi
  unsigned int v5; // r15d
  unsigned int v6; // edx
  char *v7; // rbx
  DWORD v8; // eax
  HANDLE v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  size_t v14; // rbx
  size_t v15; // rdx
  void *v16; // rax
  __int64 v17; // rcx
  void *v18; // r13
  const void *v19; // rdx
  size_t v20; // r8
  int v21; // ecx
  const struct _GUID *v22; // rsi
  const struct _GUID *v23; // r13
  char *v24; // rbx
  int v25; // r8d
  DWORD LengthSid; // eax
  HANDLE ProcessHeap; // rax
  ATL::CDacl::CAccessObjectAce *v28; // rax
  __int64 v29; // r15
  unsigned __int64 v30; // r13
  bool v31; // r13
  DWORD v32; // eax
  void *v33; // rax
  __int64 v34; // r13
  int Error; // eax
  int v36; // eax
  int v37; // ecx
  char v38; // [rsp+40h] [rbp-118h]
  int v39; // [rsp+50h] [rbp-108h] BYREF
  LPVOID pAce; // [rsp+58h] [rbp-100h] BYREF
  ATL::CDacl *v41; // [rsp+60h] [rbp-F8h]
  PACL pAcl; // [rsp+68h] [rbp-F0h]
  ATL::CDacl::CAccessObjectAce *v43; // [rsp+70h] [rbp-E8h]
  _QWORD *v44; // [rsp+78h] [rbp-E0h]
  char *v45; // [rsp+80h] [rbp-D8h]
  __int64 pAclInformation; // [rsp+88h] [rbp-D0h] BYREF
  int v47; // [rsp+90h] [rbp-C8h]
  void **v48; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE pDestinationSid[68]; // [rsp+A8h] [rbp-B0h] BYREF
  char v50; // [rsp+ECh] [rbp-6Ch]
  int v51; // [rsp+F0h] [rbp-68h]
  __int64 v52; // [rsp+F8h] [rbp-60h]
  __int64 v53; // [rsp+100h] [rbp-58h]
  __int64 v54; // [rsp+108h] [rbp-50h]
  __int64 v55; // [rsp+110h] [rbp-48h]

  v3 = this;
  v41 = this;
  pAcl = a2;
  if ( a2 )
  {
    pAclInformation = 0LL;
    v47 = 0;
    v39 = 0;
    pAce = 0LL;
    v48 = &ATL::CSid::`vftable';
    v50 = 0;
    v51 = 7;
    v52 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    v53 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    v54 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    v55 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    free(*((void **)v3 + 1));
    *((_QWORD *)v3 + 1) = 0LL;
    if ( !GetAclInformation(a2, &pAclInformation, 0xCu, AclSizeInformation)
      || !GetAclInformation(a2, &v39, 4u, AclRevisionInformation) )
    {
LABEL_4:
      ATL::AtlThrowLastWin32();
    }
    *((_DWORD *)v3 + 5) = v39;
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= (unsigned int)pAclInformation )
      {
        ATL::CSid::~CSid((ATL::CSid *)&v48);
        return;
      }
      if ( !GetAce(pAcl, v4, &pAce) )
        goto LABEL_4;
      v5 = *((_DWORD *)pAce + 1);
      v6 = *(unsigned __int8 *)pAce;
      if ( v6 > 1 )
      {
        if ( v6 - 5 > 1 )
          goto LABEL_20;
        v22 = 0LL;
        v23 = 0LL;
        v24 = (char *)pAce + 44;
        v25 = *((_DWORD *)pAce + 2);
        if ( (v25 & 1) != 0 )
          v22 = (const struct _GUID *)((char *)pAce + 12);
        else
          v24 = (char *)pAce + 28;
        if ( (v25 & 2) != 0 )
        {
          v34 = 28LL;
          if ( !v22 )
            v34 = 12LL;
          v23 = (const struct _GUID *)((char *)pAce + v34);
        }
        else
        {
          v24 -= 16;
        }
        if ( !v50 || pDestinationSid != v24 )
        {
          ATL::CSid::Clear((ATL::CSid *)&v48);
          if ( !IsValidSid(v24) || (LengthSid = GetLengthSid(v24), LengthSid > 0x44) )
LABEL_35:
            ATL::AtlThrowImpl(-2147024809);
          v50 = 1;
          if ( !CopySid(LengthSid, pDestinationSid, v24) )
          {
            Error = ATL::AtlHresultFromLastError();
            v50 = 0;
            ATL::AtlThrowImpl(Error);
          }
          v51 = 8;
        }
        ProcessHeap = GetProcessHeap();
        v28 = (ATL::CDacl::CAccessObjectAce *)HeapAlloc(ProcessHeap, 0, 0xA8uLL);
        v43 = v28;
        if ( v28 )
        {
          try
          {
            v29 = ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                    v28,
                    (const struct ATL::CSid *)&v48,
                    v5,
                    *((_BYTE *)pAce + 1),
                    *(_BYTE *)pAce == 5,
                    v22,
                    v23);
          }
          catch ( ... )
          {
            v29 = 0LL;
            v3 = v41;
          }
        }
        else
        {
          v29 = 0LL;
        }
        if ( !v29
          || (v30 = *((_QWORD *)v3 + 4), v30 >= *((_QWORD *)v3 + 5))
          && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                                 (char *)v3 + 24,
                                 v30 + 1) )
        {
LABEL_57:
          ATL::AtlThrowImpl(-2147024882);
        }
        *(_QWORD *)(*((_QWORD *)v3 + 3) + 8 * v30) = v29;
        ++*((_QWORD *)v3 + 4);
        ++v4;
      }
      else
      {
        v7 = (char *)pAce + 8;
        if ( !v50 || pDestinationSid != v7 )
        {
          ATL::CSid::Clear((ATL::CSid *)&v48);
          if ( !IsValidSid(v7) )
            goto LABEL_35;
          v8 = GetLengthSid(v7);
          if ( v8 > 0x44 )
            goto LABEL_35;
          v50 = 1;
          if ( !CopySid(v8, pDestinationSid, v7) )
          {
            v36 = ATL::AtlHresultFromLastError();
            v50 = 0;
            ATL::AtlThrowImpl(v36);
          }
          v51 = 8;
        }
        v9 = GetProcessHeap();
        v10 = HeapAlloc(v9, 0, 0x98uLL);
        v11 = v10;
        v44 = v10;
        if ( v10 )
        {
          try
          {
            v31 = *(_BYTE *)pAce == 0;
            v38 = *((_BYTE *)pAce + 1);
            *v10 = &ATL::CAcl::CAce::`vftable';
            v45 = (char *)(v10 + 1);
            v10[1] = &ATL::CSid::`vftable';
            *((_BYTE *)v10 + 84) = v50;
            *((_DWORD *)v10 + 22) = v51;
            v10[12] = ATL::CSimpleStringT<unsigned short,0>::CloneData(v52 - 24) + 24;
            v11[13] = ATL::CSimpleStringT<unsigned short,0>::CloneData(v53 - 24) + 24;
            v11[14] = ATL::CSimpleStringT<unsigned short,0>::CloneData(v54 - 24) + 24;
            ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v11 + 15);
            if ( v50 )
            {
              if ( !IsValidSid(pDestinationSid) )
                ATL::AtlThrowImpl(-2147024809);
              v32 = GetLengthSid(pDestinationSid);
              if ( !CopySid(v32, v11 + 2, pDestinationSid) )
              {
                v37 = ATL::AtlHresultFromLastError();
                ATL::AtlThrowImpl(v37);
              }
            }
            *((_DWORD *)v11 + 32) = v5;
            *((_BYTE *)v11 + 132) = v38;
            v11[17] = 0LL;
            *v11 = &ATL::CDacl::CAccessAce::`vftable';
            *((_BYTE *)v11 + 144) = v31;
          }
          catch ( ... )
          {
            v11 = 0LL;
            v3 = v41;
          }
        }
        else
        {
          v11 = 0LL;
        }
        if ( !v11 )
          goto LABEL_57;
        v12 = *((_QWORD *)v3 + 4);
        v13 = *((_QWORD *)v3 + 5);
        if ( v12 >= v13 )
        {
          v14 = v12 + 1;
          if ( v12 + 1 > v13 )
          {
            v15 = *((int *)v3 + 12);
            if ( *((_QWORD *)v3 + 3) )
            {
              if ( !*((_DWORD *)v3 + 12) )
              {
                v15 = v13 >> 1;
                if ( v14 - v13 > v13 >> 1 )
                  v15 = v14 - v13;
              }
              if ( v14 < v13 + v15 )
                v14 = v13 + v15;
              v16 = calloc(v14, 8uLL);
              v18 = v16;
              if ( !v16 )
                goto LABEL_57;
              v19 = (const void *)*((_QWORD *)v3 + 3);
              v20 = 8LL * *((_QWORD *)v3 + 4);
              if ( v20 )
              {
                if ( v19 )
                {
                  memmove_0(v16, v19, v20);
                  v21 = 0;
                }
                else
                {
                  *(_DWORD *)_o__errno(v17, 0LL) = 22;
                  invalid_parameter_noinfo();
                  v21 = 22;
                }
              }
              else
              {
                v21 = 0;
              }
              ATL::AtlCrtErrorCheck(v21);
              free(*((void **)v3 + 3));
              *((_QWORD *)v3 + 3) = v18;
            }
            else
            {
              if ( v15 > v14 )
                v14 = *((int *)v3 + 12);
              v33 = calloc(v14, 8uLL);
              *((_QWORD *)v3 + 3) = v33;
              if ( !v33 )
                goto LABEL_57;
            }
            *((_QWORD *)v3 + 5) = v14;
          }
        }
        *(_QWORD *)(*((_QWORD *)v3 + 3) + 8 * v12) = v11;
        ++*((_QWORD *)v3 + 4);
LABEL_20:
        ++v4;
      }
    }
  }
  ATL::CAcl::SetNull(this);
}
