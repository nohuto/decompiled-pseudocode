/*
 * XREFs of sub_1400156A0 @ 0x1400156A0
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140015BA8 @ 0x140015BA8 (sub_140015BA8.c)
 *     sub_140015C58 @ 0x140015C58 (sub_140015C58.c)
 *     sub_140016A04 @ 0x140016A04 (sub_140016A04.c)
 *     sub_14003F234 @ 0x14003F234 (sub_14003F234.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1400156A0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  DWORD LastError; // edi
  signed __int32 v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  if ( *(_BYTE *)(a1 + 76) )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
    if ( v2 )
    {
      LastError = GetLastError();
      LeaveCriticalSection(v2);
      SetLastError(LastError);
    }
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 0, 0) - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        *(_DWORD *)(a1 + 340) = 40;
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 340);
      if ( v5 && (v6 = v5 - 1, (*(_DWORD *)(a1 + 340) = v6) == 0)
        || sub_140015070 == *(__int64 (__fastcall **)(__int64))(a1 + 216)
        || *(_BYTE *)(a1 + 4680) )
      {
        *(_DWORD *)(a1 + 340) = 40;
        v7 = sub_1400B6010(*(_QWORD *)(a1 + 208));
        v8 = 0;
        if ( v7 != -2147418113 )
          v8 = v7;
        sub_14003F234(
          retaddr,
          734LL,
          "avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
          (unsigned int)v8,
          "SetPinInactive failed");
        if ( v8 >= 0 )
        {
          _InterlockedExchange((volatile __int32 *)(a1 + 336), 0);
          sub_140016A04(v9, *(_QWORD *)(a1 + 296));
          sub_140015BA8(a1);
          v11 = *(_QWORD *)(a1 + 328);
          if ( v11 )
          {
            v12 = sub_1400B6010(v11);
            if ( v12 < 0 )
              sub_140007934((int)retaddr, 750, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v12);
          }
        }
        else
        {
          sub_140016A04(v9, *(_QWORD *)(a1 + 296));
          sub_140015BA8(a1);
        }
        v10 = *(_QWORD *)(a1 + 432);
        if ( v10 )
          sub_140015C58(v10);
      }
    }
    if ( a1 != -128 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  }
}
