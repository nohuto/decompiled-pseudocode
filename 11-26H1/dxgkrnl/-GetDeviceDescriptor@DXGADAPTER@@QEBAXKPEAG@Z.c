/*
 * XREFs of ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x140039EE0
 * Callers:
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x140220B64 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::GetDeviceDescriptor(DXGADAPTER *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int16 v7; // ax

  v3 = *((_QWORD *)this + 245);
  if ( v3 )
  {
    v4 = (unsigned __int64)a2 >> 1;
    if ( !v4 )
      return;
    v5 = 2147483646 - v4;
    v6 = v3 - (_QWORD)a3;
    while ( v5 + v4 )
    {
      v7 = *(unsigned __int16 *)((char *)a3 + v6);
      if ( v7 )
      {
        *a3++ = v7;
        if ( --v4 )
          continue;
      }
      if ( !v4 )
        --a3;
      goto LABEL_9;
    }
    goto LABEL_9;
  }
  if ( a3 )
LABEL_9:
    *a3 = 0;
}
