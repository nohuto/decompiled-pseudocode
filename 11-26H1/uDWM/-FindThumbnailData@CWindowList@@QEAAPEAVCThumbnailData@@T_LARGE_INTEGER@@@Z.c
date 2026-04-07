/*
 * XREFs of ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x1800287E0
 * Callers:
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180028574 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x180028704 (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180029810 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081770 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     <none>
 */

struct CThumbnailData *__fastcall CWindowList::FindThumbnailData(CWindowList *this, union _LARGE_INTEGER a2)
{
  unsigned int v2; // r9d
  __int64 i; // rax

  v2 = *((_DWORD *)this + 102);
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 48) + 8 * i) + 8LL) == a2.QuadPart )
      break;
  }
  if ( (unsigned int)i >= v2 )
    return 0LL;
  else
    return *(struct CThumbnailData **)(*((_QWORD *)this + 48) + 8LL * (unsigned int)i);
}
