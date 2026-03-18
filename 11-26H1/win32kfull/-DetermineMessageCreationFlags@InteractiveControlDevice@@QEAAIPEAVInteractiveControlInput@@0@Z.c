/*
 * XREFs of ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x14013D2FC
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x140258CA4 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1402FCE84 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDevice::DetermineMessageCreationFlags(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        struct InteractiveControlInput *a3)
{
  int v3; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // r8d
  unsigned int v12; // r9d
  int v13; // r8d
  int v14; // eax
  int v15; // edi

  v3 = 0;
  if ( *((_DWORD *)this + 94) )
  {
    if ( *((_QWORD *)this + 6) )
    {
      v7 = *((_DWORD *)a3 + 18);
      if ( (v7 & 4) != 0 )
        *((_DWORD *)a3 + 18) = v7 & 0xFFFFFF7B | 0x80;
    }
  }
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 39) )
  {
    v8 = *((_DWORD *)a3 + 18);
    if ( (v8 & 4) != 0 || (v8 & 0x80u) != 0 )
      *((_DWORD *)a3 + 19) = 0;
  }
  v9 = *((_DWORD *)a3 + 18);
  v10 = v9 & 4;
  if ( a2 )
  {
    if ( (v10 != 0) != ((*((_DWORD *)a2 + 18) >> 2) & 1) )
    {
      if ( (v9 & 4) != 0 )
      {
        v3 = 512;
      }
      else
      {
        v3 = 256;
        *((_DWORD *)this + 95) = 0;
      }
    }
    v11 = *((_DWORD *)a3 + 18);
    v12 = *((_DWORD *)a2 + 18);
    if ( ((v11 & 0x80) != 0) != ((v12 >> 7) & 1) )
      v3 |= (*((_DWORD *)a3 + 18) & 0x80) != 0 ? 64 : 32;
    if ( (v11 & 1) != (v12 & 1) )
      v3 |= 1 << !(v11 & 1);
    if ( *((_DWORD *)a3 + 14) != *((_DWORD *)a2 + 14)
      || *((_DWORD *)a3 + 15) != *((_DWORD *)a2 + 15)
      || (((unsigned __int8)v12 ^ (unsigned __int8)v11) & 2) != 0 )
    {
      v13 = v11 & 2;
      if ( (v13 != 0) == ((v12 >> 1) & 1) )
      {
        if ( v13 )
          v3 |= 0x1000u;
      }
      else
      {
        v3 |= v13 != 0 ? 1024 : 2048;
        if ( !v13 )
        {
          *((_QWORD *)a3 + 7) = *((_QWORD *)a2 + 7);
          *((_QWORD *)a3 + 8) = *((_QWORD *)a2 + 8);
        }
      }
    }
  }
  else
  {
    v3 = v10 != 0 ? 0x200 : 0;
    if ( (v9 & 0x80u) != 0 )
      v3 |= 0x40u;
    if ( (v9 & 1) != 0 )
      v3 |= 1u;
    if ( (v9 & 2) != 0 )
      v3 |= 0x400u;
  }
  v14 = *((_DWORD *)a3 + 19);
  v15 = v3 | 0x80;
  if ( !v14 )
    v15 = v3;
  if ( *((_DWORD *)this + 95) )
  {
    *((_DWORD *)this + 95) = 0;
    v15 |= 0x2000u;
  }
  return v15 & (unsigned int)~*((_DWORD *)InteractiveControlManager::Instance() + 23);
}
