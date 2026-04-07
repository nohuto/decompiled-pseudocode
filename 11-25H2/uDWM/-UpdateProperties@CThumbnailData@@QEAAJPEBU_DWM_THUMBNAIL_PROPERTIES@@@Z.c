/*
 * XREFs of ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18005FBC0
 * Callers:
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18005FFA4 (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800924C0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800E6E20 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800606A4 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 */

__int64 __fastcall CThumbnailData::UpdateProperties(CThumbnailData *this, const struct _DWM_THUMBNAIL_PROPERTIES *a2)
{
  unsigned int v2; // r12d
  int *v3; // rbx
  int v4; // ebp
  char *v7; // rcx
  int v8; // r8d
  int *v9; // rcx
  int v10; // edx
  DWORD v11; // edx
  DWORD *v12; // r8
  DWORD *v13; // r9
  signed int v14; // r10d
  CThumbnailVisual *v15; // rcx
  char *v17; // rax
  int updated; // eax
  char *v19; // rcx
  char *v20; // rcx
  DWORD v21; // ecx

  v2 = 0;
  v3 = (int *)((char *)this + 36);
  v4 = 0;
  if ( (a2->dwFlags & 1) != 0 )
  {
    if ( !EqualRect((const RECT *)((char *)this + 40), &a2->rcDestination) || (*(_BYTE *)v3 & 1) == 0 )
      v4 = 1;
    *v3 |= 1u;
    *(RECT *)((char *)this + 40) = a2->rcDestination;
  }
  if ( (a2->dwFlags & 2) != 0 )
  {
    if ( !EqualRect((const RECT *)((char *)this + 56), &a2->rcSource) || (v17 = (char *)v3, (*(_BYTE *)v3 & 2) == 0) )
    {
      v4 |= 2u;
      v17 = (char *)this + 36;
    }
    *v3 |= 2u;
    v3 = (int *)v17;
    *(RECT *)((char *)this + 56) = a2->rcSource;
  }
  if ( (a2->dwFlags & 4) != 0 )
  {
    if ( *((_BYTE *)this + 72) != a2->opacity || (v20 = (char *)v3, (*(_BYTE *)v3 & 4) == 0) )
    {
      v4 |= 4u;
      v20 = (char *)this + 36;
    }
    *v3 |= 4u;
    v3 = (int *)v20;
    *((_BYTE *)this + 72) = a2->opacity;
  }
  if ( (a2->dwFlags & 8) != 0 )
  {
    if ( *(_DWORD *)((char *)this + 73) != a2->fVisible || (v7 = (char *)v3, (*(_BYTE *)v3 & 8) == 0) )
    {
      v4 |= 8u;
      v7 = (char *)this + 36;
    }
    *v3 |= 8u;
    v3 = (int *)v7;
    *(_DWORD *)((char *)this + 73) = a2->fVisible;
  }
  if ( (a2->dwFlags & 0x10) != 0 )
  {
    v19 = (char *)v3;
    if ( *(_DWORD *)((char *)this + 77) == a2->fSourceClientAreaOnly )
    {
      if ( (*(_BYTE *)v3 & 0x10) != 0 )
        goto LABEL_40;
      v19 = (char *)this + 36;
    }
    v4 |= 0x10u;
LABEL_40:
    *v3 |= 0x10u;
    v3 = (int *)v19;
    *(_DWORD *)((char *)this + 77) = a2->fSourceClientAreaOnly;
  }
  v8 = v4 | 0x80000;
  v9 = v3;
  if ( (a2->dwFlags & 0x80000) == 0 )
    v8 = v4;
  v10 = v8;
  if ( (a2->dwFlags & 0x400000) != 0 && (*v3 & 0x400000) == 0 )
  {
    v10 = v8 | 0x400000;
    v9 = (int *)((char *)this + 36);
    *v3 |= 0x400000u;
  }
  v11 = a2->dwFlags & 0x30000 | v10;
  if ( (a2->dwFlags & 0x100000) != 0 )
  {
    v11 |= 0x100000u;
    *v3 |= 0x100000u;
  }
  else
  {
    v9 = v3;
  }
  if ( (a2->dwFlags & 0x800000) != 0 )
  {
    v11 |= 0x800000u;
    v12 = (DWORD *)((char *)this + 36);
    *v9 = *v3 | 0x800000;
  }
  else
  {
    v12 = (DWORD *)v9;
  }
  if ( (a2->dwFlags & 0x1000000) != 0 )
  {
    v11 |= 0x1000000u;
    *v9 |= 0x1000000u;
  }
  else
  {
    v12 = (DWORD *)v9;
  }
  if ( (a2->dwFlags & 0xC000000) != 0 )
  {
    v11 |= a2->dwFlags & 0xC000000;
    v13 = (DWORD *)((char *)this + 36);
    *v12 = *v9 ^ (a2->dwFlags ^ *v9) & 0xC000000;
  }
  else
  {
    v13 = v12;
  }
  if ( (a2->dwFlags & 0x30000000) != 0 )
  {
    v11 |= a2->dwFlags & 0x30000000;
    *v12 ^= (a2->dwFlags ^ *v12) & 0x30000000;
  }
  else
  {
    v13 = v12;
  }
  v14 = a2->dwFlags & 0xC0000000;
  if ( v14 )
  {
    v11 |= v14;
    v21 = a2->dwFlags ^ (a2->dwFlags ^ *v12) & 0x3FFFFFFF;
    *v13 = v21;
    if ( v14 < 0 )
      *v13 = v21 & 0xFFEFFFFF;
  }
  v15 = (CThumbnailVisual *)*((_QWORD *)this + 11);
  if ( v15 )
  {
    updated = CThumbnailVisual::UpdateProperties(v15, v11);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xEBu, 0LL);
  }
  return v2;
}
