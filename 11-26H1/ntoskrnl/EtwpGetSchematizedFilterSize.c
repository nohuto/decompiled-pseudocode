/*
 * XREFs of EtwpGetSchematizedFilterSize @ 0x140915E60
 * Callers:
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140912F1C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpBuildNotificationPacket @ 0x1409159B8 (EtwpBuildNotificationPacket.c)
 *     EtwpCalculateUpdateNotification @ 0x140915B30 (EtwpCalculateUpdateNotification.c)
 *     EtwpRegisterKMProvider @ 0x140916E38 (EtwpRegisterKMProvider.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetSchematizedFilterSize(__int64 a1, __int16 a2)
{
  _QWORD *v2; // r8
  unsigned int v3; // r9d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v2 = *(_QWORD **)(a1 + 640);
  v3 = 0;
  if ( !v2 )
    return v3;
  if ( *(_DWORD *)(a1 + 128) )
  {
    v6 = v2[11];
    if ( v6 )
    {
      if ( (a2 & 1) != 0 )
        v3 = (*(_DWORD *)(v6 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 160) )
  {
    v7 = v2[24];
    if ( v7 )
    {
      if ( (a2 & 2) != 0 )
        v3 += (*(_DWORD *)(v7 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 192) )
  {
    v8 = v2[37];
    if ( v8 )
    {
      if ( (a2 & 4) != 0 )
        v3 += (*(_DWORD *)(v8 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 224) )
  {
    v9 = v2[50];
    if ( v9 )
    {
      if ( (a2 & 8) != 0 )
        v3 += (*(_DWORD *)(v9 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 256) )
  {
    v10 = v2[63];
    if ( v10 )
    {
      if ( (a2 & 0x10) != 0 )
        v3 += (*(_DWORD *)(v10 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 288) )
  {
    v11 = v2[76];
    if ( v11 )
    {
      if ( (a2 & 0x20) != 0 )
        v3 += (*(_DWORD *)(v11 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 320) )
  {
    v12 = v2[89];
    if ( v12 )
    {
      if ( (a2 & 0x40) != 0 )
        v3 += (*(_DWORD *)(v12 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 352) )
  {
    v13 = v2[102];
    if ( v13 )
    {
      if ( (a2 & 0x80u) != 0 )
        v3 += (*(_DWORD *)(v13 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 384) )
  {
    v14 = v2[115];
    if ( v14 )
    {
      if ( (a2 & 0x100) != 0 )
        v3 += (*(_DWORD *)(v14 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 416) )
  {
    v15 = v2[128];
    if ( v15 )
    {
      if ( (a2 & 0x200) != 0 )
        v3 += (*(_DWORD *)(v15 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 448) )
  {
    v16 = v2[141];
    if ( v16 )
    {
      if ( (a2 & 0x400) != 0 )
        v3 += (*(_DWORD *)(v16 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 480) )
  {
    v17 = v2[154];
    if ( v17 )
    {
      if ( (a2 & 0x800) != 0 )
        v3 += (*(_DWORD *)(v17 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 512) )
  {
    v18 = v2[167];
    if ( v18 )
    {
      if ( (a2 & 0x1000) != 0 )
        v3 += (*(_DWORD *)(v18 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 544) )
  {
    v19 = v2[180];
    if ( v19 )
    {
      if ( (a2 & 0x2000) != 0 )
        v3 += (*(_DWORD *)(v19 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 576) )
  {
    v20 = v2[193];
    if ( v20 )
    {
      if ( (a2 & 0x4000) != 0 )
        v3 += (*(_DWORD *)(v20 + 16) + 7) & 0xFFFFFFF8;
    }
  }
  if ( *(_DWORD *)(a1 + 608) && (v5 = v2[206]) != 0 && a2 < 0 )
    return v3 + ((*(_DWORD *)(v5 + 16) + 7) & 0xFFFFFFF8);
  else
    return v3;
}
