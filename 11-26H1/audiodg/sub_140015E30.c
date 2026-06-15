/*
 * XREFs of sub_140015E30 @ 0x140015E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140015C30 @ 0x140015C30 (sub_140015C30.c)
 *     sub_140015C58 @ 0x140015C58 (sub_140015C58.c)
 *     sub_1400162D8 @ 0x1400162D8 (sub_1400162D8.c)
 */

__int64 __fastcall sub_140015E30(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  char v3; // bp
  char v5; // r8
  void **v6; // rsi
  HANDLE Handles[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  if ( *(_QWORD *)(a1 + 120)
    && *(_QWORD *)(a1 + 120) != -1LL
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 1, 2) == 2 )
  {
    v6 = (void **)(a1 + 416);
    if ( sub_140015C30(a1) && *v6 )
      v3 = v5;
    else
      *(_DWORD *)(a1 + 340) = 40;
    if ( v1 )
      LeaveCriticalSection(v1);
    if ( v3 )
    {
      sub_1400162D8(*(_QWORD *)(a1 + 432));
      sub_140015C58(*v6);
      Handles[0] = *(HANDLE *)(a1 + 280);
      Handles[1] = *(HANDLE *)(a1 + 432);
      WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    }
  }
  else if ( v1 )
  {
    LeaveCriticalSection(v1);
  }
  return 0LL;
}
