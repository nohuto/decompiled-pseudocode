/*
 * XREFs of sub_140016310 @ 0x140016310
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_140016530 @ 0x140016530 (sub_140016530.c)
 *     sub_1400165A4 @ 0x1400165A4 (sub_1400165A4.c)
 *     sub_140016980 @ 0x140016980 (sub_140016980.c)
 *     sub_140016A04 @ 0x140016A04 (sub_140016A04.c)
 *     sub_140039E2C @ 0x140039E2C (sub_140039E2C.c)
 *     sub_14003DB4C @ 0x14003DB4C (sub_14003DB4C.c)
 *     sub_14005D070 @ 0x14005D070 (sub_14005D070.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140016310(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v10; // rax
  void *v11; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  lpCriticalSection = v2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  *(_BYTE *)(a1 + 76) = 1;
  sub_140016530(&lpCriticalSection, 0LL);
  if ( *(_BYTE *)(a1 + 72) )
  {
    if ( (unsigned __int8)sub_1400165A4(a1 + 120) )
    {
      if ( a1 != -128 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return 2289827863LL;
    }
    else
    {
      sub_140016A04(v3, *(_QWORD *)(a1 + 296));
      if ( (byte_1400E8401 & 4) != 0 )
        sub_14005D070(v5, v4, a1, 9LL);
      sub_140016980(a1);
      v7 = *(_QWORD *)(a1 + 424);
      if ( v7 )
      {
        v11 = (void *)sub_1400B6010(v7);
        SetEvent(v11);
      }
      _InterlockedExchange64((volatile __int64 *)(a1 + 384), 0LL);
      v8 = *(_QWORD *)(a1 + 328);
      *(_QWORD *)(a1 + 328) = 0LL;
      if ( v8 )
        sub_1400B6010(v8);
      if ( *(_BYTE *)(a1 + 325) )
      {
        sub_14003DB4C();
        *(_BYTE *)(a1 + 325) = 0;
      }
      if ( *(_BYTE *)(a1 + 324) )
      {
        v10 = sub_14000DA4C();
        sub_140039E2C(v10);
        *(_BYTE *)(a1 + 324) = 0;
      }
      if ( (byte_1400E8401 & 4) != 0 )
        sub_14005D070(v8, v6, a1, 2LL);
      if ( a1 != -128 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return 0LL;
    }
  }
  else
  {
    sub_14000C2A8((int)retaddr, 1164, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", -2005139437);
    if ( a1 != -128 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 2289827859LL;
  }
}
