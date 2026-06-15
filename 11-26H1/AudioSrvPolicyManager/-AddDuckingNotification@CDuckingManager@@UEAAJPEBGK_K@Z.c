/*
 * XREFs of ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180028BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800083AC (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001B6B8 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotifica.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001B868 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18001C1E0 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::AddDuckingNotification(
        CDuckingManager *this,
        unsigned __int16 *a2,
        int a3,
        __int64 a4)
{
  int v5; // ebx
  CDuckingNotification *v6; // rax
  int *v9; // rbx
  ATL::CAtlException *v10; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v11[56]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v12[16]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v13; // [rsp+78h] [rbp-50h]
  __m128i si128; // [rsp+88h] [rbp-40h]
  __int64 v15; // [rsp+98h] [rbp-30h]

  v13 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v13) = 0;
  v15 = 0LL;
  if ( *((_BYTE *)this + 448) == 1 )
  {
    v5 = -2147467260;
LABEL_6:
    AudPolicyLogError("CDuckingManager::AddDuckingNotification", 386, v5);
    goto LABEL_7;
  }
  v5 = CDuckingNotification::Init((CDuckingNotification *)v12, a3, a2, a4);
  if ( v5 < 0 )
    goto LABEL_6;
  try
  {
    v6 = CDuckingNotification::CDuckingNotification(
           (CDuckingNotification *)v11,
           (const struct CDuckingNotification *)v12);
    v5 = CLockedList_UniqueValuesOnly<CDuckingNotification,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 64), v6);
  }
  catch ( ATL::CAtlException *v10 )
  {
    v9 = (int *)v10;
    if ( *(_DWORD *)v10 == -1073741571 )
      _o__resetstkoflw();
    v5 = *v9;
  }
  if ( v5 < 0 )
    goto LABEL_6;
LABEL_7:
  CDuckingNotification::~CDuckingNotification((CDuckingNotification *)v12);
  return (unsigned int)v5;
}
