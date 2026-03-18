/*
 * XREFs of ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x14031CB80
 * Callers:
 *     EngMapFontFile @ 0x14031D640 (EngMapFontFile.c)
 * Callees:
 *     ?bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z @ 0x1400CF638 (-bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x14021164C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140265250 (-vUnmapFile@@YAXPEAUFILEVIEW@@H@Z.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x14031D48C (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall EngMapFontFileInternal(__int64 a1, unsigned int **a2, unsigned int *a3)
{
  unsigned int **v4; // r12
  struct _FAST_MUTEX **v6; // r15
  unsigned int v7; // esi
  int v8; // r14d
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  unsigned int v12; // edi
  __int64 v14; // [rsp+28h] [rbp-49h] BYREF
  __int64 v15; // [rsp+30h] [rbp-41h]
  __int64 v16; // [rsp+38h] [rbp-39h]
  __int64 v17; // [rsp+40h] [rbp-31h]
  int v18; // [rsp+48h] [rbp-29h]
  _BYTE v19[80]; // [rsp+58h] [rbp-19h] BYREF

  v4 = a2;
  v6 = (struct _FAST_MUTEX **)Gre::Base::Globals((Gre::Base *)a1);
  memset_0(v19, 0, sizeof(v19));
  v7 = 1;
  v8 = 1;
  KeAcquireGuardedMutex(*v6 + 26);
  v9 = (_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 8) )
  {
    ++*(_DWORD *)(a1 + 96);
    v8 = 0;
  }
  else
  {
    if ( *v9 )
    {
      v10 = *(_QWORD *)(a1 + 32);
      if ( v10 )
      {
        v14 = 0LL;
        v16 = 0LL;
        v17 = 0LL;
        v15 = 0LL;
        v18 = 6;
        v11 = Gre::MapViewOfSectionObj::Map((__int64)&v14, v10, 4LL, 0LL);
        v7 = v11;
        if ( v11 )
        {
          *(_QWORD *)(a1 + 8) = v16;
          *(_DWORD *)(a1 + 24) = v17;
          v17 = 0LL;
          *(_DWORD *)(a1 + 96) = 1;
          v16 = 0LL;
          v14 = 0LL;
          v15 = 0LL;
          v18 = 6;
        }
        v8 = 0;
        Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v14);
        v9 = (_QWORD *)(a1 + 80);
      }
    }
    v4 = a2;
  }
  KeReleaseGuardedMutex(*v6 + 26);
  if ( v8 )
  {
    if ( !(unsigned int)bMapFile(*v9, v19, 0LL, 1LL, v14) )
      return 0;
    KeAcquireGuardedMutex(*v6 + 26);
    ++*(_DWORD *)(a1 + 96);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v12 = 0;
    }
    else
    {
      v12 = bMapRoutine(a1, (__int64)v19, 0);
      v7 = v12;
    }
    KeReleaseGuardedMutex(*v6 + 26);
    if ( !v12 )
      vUnmapFile((struct FILEVIEW *)v19);
  }
  if ( v7 )
  {
    if ( v4 )
      *v4 = *(unsigned int **)(a1 + 8);
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 24);
  }
  return v7;
}
