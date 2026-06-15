/*
 * XREFs of sub_14003F2C0 @ 0x14003F2C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140015C30 @ 0x140015C30 (sub_140015C30.c)
 *     sub_140015C58 @ 0x140015C58 (sub_140015C58.c)
 *     sub_1400162D8 @ 0x1400162D8 (sub_1400162D8.c)
 *     sub_140016A80 @ 0x140016A80 (sub_140016A80.c)
 *     sub_140023530 @ 0x140023530 (sub_140023530.c)
 *     sub_14003F234 @ 0x14003F234 (sub_14003F234.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14003F2C0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int32 v3; // esi
  int v4; // edi
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  *(_DWORD *)(a1 + 340) = 40;
  v3 = _InterlockedExchange((volatile __int32 *)(a1 + 336), 2);
  if ( v3 == 2 )
    goto LABEL_2;
  if ( sub_140015C30(a1) )
    *(_BYTE *)(a1 + 4681) = 0;
  v4 = sub_1400B6010(*(_QWORD *)(a1 + 208));
  if ( v4 < 0 )
  {
    sub_14003F234((int)retaddr, 1340, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v4);
    if ( v4 != -2147467259 )
      _InterlockedExchange((volatile __int32 *)(a1 + 336), v3);
  }
  else if ( sub_140015C30(a1) )
  {
    sub_1400162D8(*(void **)(a1 + 432));
    sub_140015C58(*(void **)(a1 + 288));
    Handles[0] = *(HANDLE *)(a1 + 280);
    Handles[1] = *(HANDLE *)(a1 + 432);
    WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    if ( *(_BYTE *)(a1 + 4682) )
    {
      v6 = *(_DWORD **)(a1 + 4768);
      if ( *v6 > 5u )
        sub_140023530((int)v6, (int)&unk_1400D22C9, 0);
      *(_BYTE *)(a1 + 4682) = 0;
      sub_140015C58(*(void **)(a1 + 312));
    }
  }
  else
  {
    if ( (int)sub_140016A80(v5, *(void **)(a1 + 296), *(_QWORD *)(a1 + 104) * ((*(_QWORD *)(a1 + 312) != 0LL) + 1LL), 1) >= 0 )
    {
LABEL_2:
      v4 = 0;
      goto LABEL_16;
    }
    if ( (int)sub_1400B6010(*(_QWORD *)(a1 + 208)) >= 0 )
      _InterlockedExchange((volatile __int32 *)(a1 + 336), 0);
  }
LABEL_16:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v4;
}
