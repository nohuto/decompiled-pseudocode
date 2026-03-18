/*
 * XREFs of NtGdiHLSurfSetInformation @ 0x1401A6370
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmCloseCompositorRef @ 0x140095930 (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1401A664C (GreSfmOpenCompositorRef.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1401A675C (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1401A6988 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreHLsurfSetPresentFlags @ 0x140323030 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x140323134 (GreHLsurfSetUpdateId.c)
 *     GreSfmGenerateMoveData @ 0x14033312C (GreSfmGenerateMoveData.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiHLSurfSetInformation(__int64 a1, int a2, const void *a3, unsigned int a4)
{
  const void *v4; // r10
  NTSTATUS v7; // ebx
  size_t v8; // r8
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  __int64 v13; // rcx
  NTSTATUS updated; // eax
  unsigned int v15; // edi
  __int64 HDEV; // rax
  int v18; // edi
  Gre::Base *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  ULONG v22; // eax
  _OWORD v23[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v24; // [rsp+68h] [rbp-10h]

  v4 = a3;
  v7 = -1073741811;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  if ( a2 >= 11 )
  {
    v7 = -1073741821;
    goto LABEL_56;
  }
  switch ( a2 )
  {
    case 1:
      if ( !a3 )
        goto LABEL_43;
      if ( a4 < 4 )
      {
        v7 = -1073741306;
        goto LABEL_43;
      }
      break;
    case 2:
      if ( !a3 )
        goto LABEL_43;
      v8 = 8LL;
      if ( a4 < 8 )
      {
        v7 = -1073741306;
        goto LABEL_43;
      }
      goto LABEL_12;
    case 5:
      if ( !a3 )
        goto LABEL_43;
      v8 = 24LL;
      if ( a4 < 0x18 )
      {
        v7 = -1073741306;
        goto LABEL_43;
      }
      goto LABEL_12;
    case 7:
      if ( a3 )
        goto LABEL_43;
      if ( a4 )
      {
        v7 = -1073741306;
        goto LABEL_43;
      }
      goto LABEL_37;
    case 8:
      if ( a3 )
        goto LABEL_43;
      if ( a4 )
      {
        v7 = -1073741306;
        goto LABEL_43;
      }
      goto LABEL_37;
    case 10:
      if ( !a3 )
        goto LABEL_43;
      if ( a4 < 4 )
      {
        v7 = -1073741306;
        goto LABEL_43;
      }
      break;
    default:
      v7 = -1073741821;
      goto LABEL_43;
  }
  v8 = 4LL;
LABEL_12:
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v23, v4, v8);
LABEL_37:
  v9 = a2 - 1;
  if ( !v9 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetPresentFlags(v21, a1, LODWORD(v23[0]));
    goto LABEL_42;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetUpdateId(v20, a1, *(_QWORD *)&v23[0]);
    goto LABEL_42;
  }
  v11 = v10 - 3;
  if ( !v11 )
  {
    if ( *(_OWORD *)((char *)v23 + 8) == 0LL )
    {
      updated = GreSfmRegisterLogicalSurfaceForSignaling(a1, LODWORD(v23[0]));
    }
    else
    {
      HDEV = UserGetHDEV();
      updated = GreSetRedirectionSurfaceSignaling(HDEV, a1, *(_QWORD *)&v23[1], *((_QWORD *)&v23[0] + 1), v23[0]);
    }
    goto LABEL_42;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    UserGetHDEV();
    updated = GreSfmOpenCompositorRef(v13, a1);
LABEL_42:
    v7 = updated;
    goto LABEL_43;
  }
  v18 = v12 - 1;
  if ( !v18 )
  {
    v19 = (Gre::Base *)UserGetHDEV();
    updated = GreSfmCloseCompositorRef(v19, a1);
    goto LABEL_42;
  }
  if ( v18 == 2 )
    GreSfmGenerateMoveData(LODWORD(v23[0]));
LABEL_43:
  if ( v7 >= 0 )
  {
    v15 = 1;
    goto LABEL_45;
  }
LABEL_56:
  v15 = 0;
LABEL_45:
  if ( !v15 )
  {
    v22 = RtlNtStatusToDosError(v7);
    EngSetLastError(v22);
  }
  return v15;
}
