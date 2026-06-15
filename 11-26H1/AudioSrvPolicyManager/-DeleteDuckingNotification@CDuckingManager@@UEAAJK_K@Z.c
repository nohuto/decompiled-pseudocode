/*
 * XREFs of ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18001B7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800083AC (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?RemoveInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001B580 (-RemoveInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotif.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001B868 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18001C1E0 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::DeleteDuckingNotification(
        CDuckingManager *this,
        unsigned int a2,
        unsigned __int64 a3)
{
  int v4; // ebx
  CDuckingNotification *v6; // rax
  int *v8; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v10[56]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v11[16]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v12; // [rsp+78h] [rbp-50h]
  __m128i si128; // [rsp+88h] [rbp-40h]
  __int64 v14; // [rsp+98h] [rbp-30h]

  v12 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v12) = 0;
  v14 = 0LL;
  v4 = CDuckingNotification::Init((CDuckingNotification *)v11, a2, 0LL, a3);
  if ( v4 < 0 )
    goto LABEL_2;
  try
  {
    v6 = CDuckingNotification::CDuckingNotification(
           (CDuckingNotification *)v10,
           (const struct CDuckingNotification *)v11);
    v4 = CLockedList_UniqueValuesOnly<CDuckingNotification,0>::RemoveInterface(
           (LPCRITICAL_SECTION)((char *)this + 64),
           v6);
  }
  catch ( ATL::CAtlException *v9 )
  {
    v8 = (int *)v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      _o__resetstkoflw();
    v4 = *v8;
  }
  if ( v4 < 0 )
LABEL_2:
    AudPolicyLogError("CDuckingManager::DeleteDuckingNotification", 455, v4);
  CDuckingNotification::~CDuckingNotification((CDuckingNotification *)v11);
  return (unsigned int)v4;
}
