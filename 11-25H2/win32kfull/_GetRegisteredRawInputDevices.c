/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x140215A04
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x140215980 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?IsKeyboardDevice@@YAHGG@Z @ 0x14020B6FC (-IsKeyboardDevice@@YAHGG@Z.c)
 *     ?IsMouseDevice@@YAHGG@Z @ 0x140216AAC (-IsMouseDevice@@YAHGG@Z.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x140274D84 (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(volatile void *a1, ULONG64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  _QWORD *i; // rax
  _QWORD *j; // rax
  _QWORD **v9; // rcx
  _QWORD *k; // rax
  _DWORD *v11; // rdx
  unsigned int *v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  unsigned int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 *v20; // rax
  __int64 v21; // rax
  __int16 v22; // dx
  unsigned __int16 v23; // cx
  __int64 v24; // r8
  int v25; // r10d
  __int16 v26; // r11
  int v27; // r14d
  unsigned __int16 v28; // dx
  unsigned __int16 v29; // cx
  __int64 v30; // r8
  int v31; // r10d
  __int64 v32; // r8
  unsigned int v33; // r9d
  int v34; // r10d
  __int64 *v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rcx
  int v42; // [rsp+24h] [rbp-B4h]
  unsigned int v43; // [rsp+28h] [rbp-B0h]
  __int128 v44; // [rsp+30h] [rbp-A8h]
  __int128 v45; // [rsp+60h] [rbp-78h]
  unsigned __int64 v46; // [rsp+70h] [rbp-68h]
  __int64 *v49; // [rsp+F8h] [rbp+20h]

  v2 = 0;
  v3 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v6 = *(_QWORD *)(v5 + 824);
  if ( v6 )
  {
    for ( i = *(_QWORD **)(v6 + 16); i != (_QWORD *)(v6 + 16); i = (_QWORD *)*i )
      ++v3;
    for ( j = *(_QWORD **)(v6 + 32); j != (_QWORD *)(v6 + 32); j = (_QWORD *)*j )
      ++v3;
    v9 = (_QWORD **)(v6 + 48);
    for ( k = *v9; k != v9; k = (_QWORD *)*k )
      ++v3;
  }
  if ( a1 )
  {
    v12 = (unsigned int *)a2;
    if ( a2 >= MmUserProbeAddress )
      v12 = (unsigned int *)MmUserProbeAddress;
    v13 = *v12;
    v43 = v13;
    if ( (_DWORD)v13 )
    {
      ProbeForWrite(a1, 16 * v13, 4u);
      v14 = *(_QWORD *)(v5 + 824);
      if ( v14 )
      {
        if ( (unsigned int)v13 >= v3 )
        {
          v16 = 0;
          v42 = 0;
          v17 = *(_QWORD *)(v14 + 16);
          while ( 1 )
          {
            v49 = (__int64 *)v17;
            v18 = *(_QWORD *)(v5 + 824);
            if ( v17 == v18 + 16 || v16 >= v43 )
              break;
            DWORD1(v44) = 0;
            v19 = *(_DWORD *)(v17 + 20);
            if ( (v19 & 1) != 0 )
              DWORD1(v44) = (v19 & 2) != 0 ? 4096 : 256;
            LODWORD(v44) = *(_DWORD *)(v17 + 16);
            v20 = *(__int64 **)(v17 + 32);
            if ( v20 )
              v21 = *v20;
            else
              v21 = 0LL;
            *((_QWORD *)&v44 + 1) = v21;
            v27 = IsKeyboardDevice(*(_WORD *)(v17 + 16), *(_WORD *)(v17 + 18));
            if ( v27 && (*(_DWORD *)(v24 + 100) & 0x20) != 0
              || (unsigned int)IsMouseDevice(v23, v22) && (*(_DWORD *)(v24 + 100) & 2) != 0 )
            {
              v25 |= 0x30u;
              DWORD1(v44) = v25;
            }
            if ( v27 && (*(_DWORD *)(v24 + 100) & 0x200) != 0 )
              DWORD1(v44) = v25 | 0x200;
            if ( (unsigned int)IsKeyboardDevice(v26, v22) && (*(_DWORD *)(v30 + 100) & 0x400) != 0 )
              DWORD1(v44) = v31 | 0x400;
            if ( (unsigned int)IsMouseDevice(v29, v28) )
            {
              if ( (*(_DWORD *)(v32 + 100) & 0x100) != 0 )
              {
                v34 |= 0x200u;
                DWORD1(v44) = v34;
              }
              if ( (*(_DWORD *)(v32 + 100) & 0x800) != 0 )
                DWORD1(v44) = v34 | 0x8000;
            }
            *((_OWORD *)a1 + v33) = v44;
            v17 = *v49;
            v16 = ++v42;
          }
          v35 = *(__int64 **)(v18 + 32);
          while ( 1 )
          {
            v36 = *(_QWORD *)(v5 + 824);
            if ( v35 == (__int64 *)(v36 + 32) || v16 >= v43 )
              break;
            DWORD1(v45) = 32;
            v37 = *((_DWORD *)v35 + 5);
            if ( (v37 & 1) != 0 )
              DWORD1(v45) = (v37 & 2) != 0 ? 4128 : 288;
            v38 = (__int64 *)v35[4];
            if ( v38 )
              v39 = *v38;
            else
              v39 = 0LL;
            *((_QWORD *)&v45 + 1) = v39;
            LODWORD(v45) = *((_DWORD *)v35 + 4);
            *((_OWORD *)a1 + v16) = v45;
            v35 = (__int64 *)*v35;
            v16 = ++v42;
          }
          v40 = *(__int64 **)(v36 + 48);
          while ( v40 != (__int64 *)(*(_QWORD *)(v5 + 824) + 48LL) && v16 < v43 )
          {
            HIDWORD(v46) = 16;
            LODWORD(v46) = *((_DWORD *)v40 + 4);
            *((_OWORD *)a1 + v16) = v46;
            v40 = (__int64 *)*v40;
            v16 = ++v42;
          }
          SortRegisteredDevices((struct tagRAWINPUTDEVICE *)a1, v3);
          return v3;
        }
        else
        {
          v15 = (_DWORD *)a2;
          if ( a2 >= MmUserProbeAddress )
            v15 = (_DWORD *)MmUserProbeAddress;
          *v15 = v3;
          v2 = -1;
          UserSetLastError(122);
        }
      }
    }
    else
    {
      v2 = -1;
      UserSetLastError(87);
    }
  }
  else
  {
    v11 = (_DWORD *)a2;
    if ( a2 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    *v11 = v3;
  }
  return v2;
}
