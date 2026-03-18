/*
 * XREFs of AddPalmRejectionDelayZone @ 0x14021AD2C
 * Callers:
 *     NtUserCreatePalmRejectionDelayZone @ 0x1401E2810 (NtUserCreatePalmRejectionDelayZone.c)
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140049048 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x14021A490 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 */

__int64 __fastcall AddPalmRejectionDelayZone(void *a1, struct tagRECT *a2, void *a3, struct tagRECT *a4, int a5)
{
  unsigned int v9; // ebx
  struct DelayZonePalmRejection *Instance; // rcx
  struct tagRECT v11; // xmm1
  struct tagRECT v13; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v14; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0;
  Instance = DelayZonePalmRejection::GetInstance((int)a1, (int)a2, (int)a3);
  if ( Instance )
  {
    v11 = *a2;
    v13 = *a4;
    v14 = v11;
    return (unsigned int)DelayZonePalmRejection::AddDelayZoneToList((PERESOURCE *)Instance, a1, &v14, a3, &v13, a5);
  }
  return v9;
}
