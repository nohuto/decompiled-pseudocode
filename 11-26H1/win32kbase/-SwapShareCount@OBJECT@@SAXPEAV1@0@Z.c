/*
 * XREFs of ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1401BF6BC
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 */

void __fastcall OBJECT::SwapShareCount(struct OBJECT *a1, struct OBJECT *a2)
{
  int v2; // r8d
  __int64 SessionState; // rax
  __int64 v6; // rcx

  v2 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = v2;
  SessionState = W32GetSessionState(a1);
  if ( *(_BYTE *)(HmgPentryFromPobj(*(_QWORD *)(SessionState + 88)) + 14) == 5 )
  {
    v6 = *((_QWORD *)a1 + 85);
    *((_QWORD *)a1 + 85) = *((_QWORD *)a2 + 85);
    *((_QWORD *)a2 + 85) = v6;
  }
}
