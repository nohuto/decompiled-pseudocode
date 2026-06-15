/*
 * XREFs of _lambda_e1a11bc3ee8655867b11559744636b64_::operator() @ 0x1800042BC
 * Callers:
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x180003F70 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180004A60 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IsValidProperty@CAudioSessionPropertyStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x18000522C (-IsValidProperty@CAudioSessionPropertyStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800286A0 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180035144 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18003E0AC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x18003E124 (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 */

__int64 __fastcall lambda_e1a11bc3ee8655867b11559744636b64_::operator()(__int64 a1)
{
  unsigned __int16 **v2; // r8
  __int64 v3; // rdx
  HRESULT UBound; // ebx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  int v7; // r8d
  LONG v8; // eax
  __int64 v9; // rax
  const char *v10; // rcx
  const unsigned __int16 *v11; // rcx
  _QWORD *v12; // rax
  char *v13; // rbx
  char *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _WORD *v17; // r9
  LONG v18; // eax
  HRESULT Element; // eax
  unsigned int v20; // esi
  __int64 v21; // rdx
  const unsigned __int16 *v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int16 *v24; // rcx
  unsigned __int64 **v26; // rax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  LONG plUbound; // [rsp+60h] [rbp+40h] BYREF
  unsigned __int64 rgIndices; // [rsp+68h] [rbp+48h] BYREF
  _QWORD *v31; // [rsp+70h] [rbp+50h] BYREF

  if ( CAudioSessionPropertyStore::IsValidProperty(
         (CAudioSessionPropertyStore *)a1,
         **(const struct tagPROPVARIANT ***)(a1 + 8)) )
  {
    plUbound = 0;
    v5 = (__int64)*v2;
    v6 = 24LL;
    v7 = **v2;
    if ( v7 != 8 )
    {
      if ( v7 == 30 )
      {
        v10 = *(const char **)(v5 + 8);
        rgIndices = 0LL;
        UBound = StringCbLengthA(v10, (unsigned int)(v7 - 30), &rgIndices);
        if ( UBound < 0 )
        {
          v3 = 750LL;
          goto LABEL_4;
        }
        if ( rgIndices > 0x400 )
        {
          UBound = -2147024882;
          v3 = 751LL;
          goto LABEL_4;
        }
        v6 = rgIndices + 25;
        goto LABEL_38;
      }
      if ( v7 != 31 )
      {
        if ( v7 == 65 || v7 == 70 )
        {
          v9 = *(unsigned int *)(v5 + 8);
          if ( (unsigned int)v9 > 0x400 )
          {
            UBound = -2147024882;
            v3 = 708LL;
            goto LABEL_4;
          }
          v6 = v9 + 24;
        }
        else if ( v7 == 8196 )
        {
          if ( SafeArrayGetDim(*(SAFEARRAY **)(v5 + 8)) != 1 )
          {
            v3 = 714LL;
            goto LABEL_3;
          }
          if ( SafeArrayGetElemsize(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL)) != 4 )
          {
            v3 = 715LL;
            goto LABEL_3;
          }
          UBound = SafeArrayGetUBound(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), 1u, &plUbound);
          if ( UBound < 0 )
          {
            v3 = 716LL;
            goto LABEL_4;
          }
          if ( plUbound < 0 )
          {
            UBound = -2147024882;
            v3 = 717LL;
            goto LABEL_4;
          }
          v8 = plUbound + 1;
          plUbound = v8;
          if ( (unsigned int)v8 > 0x100 )
          {
            UBound = -2147024882;
            v3 = 723LL;
            goto LABEL_4;
          }
          v6 = 4LL * v8 + 24;
        }
LABEL_38:
        v12 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
        v31 = v12;
        v13 = (char *)v12;
        if ( !v12 )
        {
          UBound = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2FC,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)0x8007000ELL,
            savedregs);
          Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v31);
          return (unsigned int)UBound;
        }
        v14 = (char *)(v12 + 3);
        v15 = **(_QWORD **)(a1 + 8);
        *(_OWORD *)v12 = *(_OWORD *)v15;
        v12[2] = *(_QWORD *)(v15 + 16);
        v16 = *(_QWORD **)(a1 + 8);
        v17 = (_WORD *)*v16;
        if ( *(_WORD *)*v16 != 8 )
        {
          if ( *(_WORD *)*v16 == 30 )
          {
            Element = StringCchCopyA(v13 + 24, v6 - 24, *((const char **)v17 + 1));
            v20 = Element;
            if ( Element < 0 )
            {
              v21 = 812LL;
LABEL_58:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v21,
                (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                (const char *)(unsigned int)Element,
                savedregs);
              Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v31);
              return v20;
            }
LABEL_59:
            *((_QWORD *)v13 + 1) = 24LL;
LABEL_60:
            v26 = *(unsigned __int64 ***)(a1 + 16);
            v31 = 0LL;
            **v26 = v6;
            **(_QWORD **)(a1 + 24) = v13;
            Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v31);
            return 0LL;
          }
          if ( *(_WORD *)*v16 != 31 )
          {
            if ( *(_WORD *)*v16 == 65 || *(_WORD *)*v16 == 70 )
            {
              memcpy_0(v13 + 24, *((const void **)v17 + 2), *((unsigned int *)v17 + 2));
              *((_QWORD *)v13 + 2) = 24LL;
            }
            else if ( *(_WORD *)*v16 == 8196 )
            {
              *((_QWORD *)v13 + 1) = 24LL;
              v18 = 0;
              LODWORD(rgIndices) = 0;
              while ( v18 < plUbound )
              {
                Element = SafeArrayGetElement(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), (LONG *)&rgIndices, v14);
                v20 = Element;
                if ( Element < 0 )
                {
                  v21 = 787LL;
                  goto LABEL_58;
                }
                v14 += 4;
                v18 = rgIndices + 1;
                LODWORD(rgIndices) = rgIndices + 1;
              }
            }
            goto LABEL_60;
          }
        }
        v22 = (const unsigned __int16 *)*((_QWORD *)v17 + 1);
        v23 = v6 - 24;
        v24 = (unsigned __int16 *)(v13 + 24);
        if ( *(_WORD *)*v16 == 8 )
        {
          Element = StringCbCopyW(v24, v23, v22);
          v20 = Element;
          if ( Element < 0 )
          {
            v21 = 798LL;
            goto LABEL_58;
          }
        }
        else
        {
          Element = StringCbCopyW(v24, v23, v22);
          v20 = Element;
          if ( Element < 0 )
          {
            v21 = 803LL;
            goto LABEL_58;
          }
        }
        goto LABEL_59;
      }
    }
    v11 = *(const unsigned __int16 **)(v5 + 8);
    rgIndices = 0LL;
    if ( (_WORD)v7 == 8 )
    {
      UBound = StringCbLengthW(v11, 0x7FFFFFFFuLL, &rgIndices);
      if ( UBound < 0 )
      {
        v3 = 734LL;
        goto LABEL_4;
      }
    }
    else
    {
      UBound = StringCbLengthW(v11, 0x7FFFFFFFuLL, &rgIndices);
      if ( UBound < 0 )
      {
        v3 = 738LL;
        goto LABEL_4;
      }
    }
    if ( rgIndices > 0x400 )
    {
      UBound = -2147024882;
      v3 = 741LL;
      goto LABEL_4;
    }
    v6 = rgIndices + 26;
    goto LABEL_38;
  }
  v3 = 699LL;
LABEL_3:
  UBound = -2147024809;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
    (const char *)(unsigned int)UBound,
    savedregs);
  return (unsigned int)UBound;
}
