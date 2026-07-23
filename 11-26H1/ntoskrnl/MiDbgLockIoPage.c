/*
 * XREFs of MiDbgLockIoPage @ 0x140702D80
 * Callers:
 *     MiDbgMapPhysicalAddress @ 0x140703038 (MiDbgMapPhysicalAddress.c)
 * Callees:
 *     MiFreezeIoPfnNode @ 0x1406F8D5C (MiFreezeIoPfnNode.c)
 *     MiUnfreezeIoPfnNode @ 0x1406F9AAC (MiUnfreezeIoPfnNode.c)
 */

__int64 __fastcall MiDbgLockIoPage(__int64 a1)
{
  __int64 *v1; // r14
  int v2; // ebx
  int v3; // edi
  unsigned __int64 v4; // rbp
  __int64 v6; // r8
  int v7; // r15d
  __int64 result; // rax
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // ecx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax

  v1 = (__int64 *)(a1 + 112);
  v2 = *(_DWORD *)a1;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 56) >> 12;
  v6 = a1 + 112;
  v7 = *(_DWORD *)a1 & 4;
  if ( v7 )
  {
    if ( !(unsigned int)MiFreezeIoPfnNode(v4, 1uLL, v6) )
    {
      stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x10u;
      return 0LL;
    }
  }
  else
  {
    MiFreezeIoPfnNode(v4, 0LL, v6);
  }
  v9 = 3;
  if ( *v1 )
  {
    v9 = (*(_DWORD *)(*v1
                    + 4
                    * ((unsigned __int64)(2
                                        * (((unsigned int)v4 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D878
                                                                                     - 12))
                                                              - 1))
                                         - *(_DWORD *)(*v1 + 24))) >> 5)
                    + 44) >> (2 * ((v4 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1)) - *(_BYTE *)(*v1 + 24)))) & 3;
    if ( v9 != 3 )
    {
      v10 = v2 & 0xFFFFFFC7;
      if ( v9 )
      {
        if ( v9 == 2 )
          v2 = v10 | 0x20;
        else
          v2 = v10 | 8;
        goto LABEL_17;
      }
LABEL_16:
      v2 = v10 | 0x10;
      goto LABEL_17;
    }
  }
  if ( !v7 )
    v3 = v9;
  v9 = v3;
  if ( (v2 & 0x28) != 0 )
  {
    v10 = v2 & 0xFFFFFFD7;
    goto LABEL_16;
  }
LABEL_17:
  v11 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)a1 = v2;
  if ( (v2 & 8) == 0 )
  {
    if ( (v2 & 0x10) != 0 )
    {
      v12 = __readcr4();
      if ( (v12 & 0x20080) != 0 )
      {
        __writecr4(v12 ^ 0x80);
        __writecr4(v12);
      }
      else
      {
        v13 = __readcr3();
        __writecr3(v13);
      }
      v11 |= 0x10u;
    }
    else
    {
      if ( (v2 & 0x20) == 0 )
      {
        stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x20u;
        MiUnfreezeIoPfnNode(v1);
        return 0LL;
      }
      v14 = __readcr4();
      if ( (v14 & 0x20080) != 0 )
      {
        __writecr4(v14 ^ 0x80);
        __writecr4(v14);
      }
      else
      {
        v15 = __readcr3();
        __writecr3(v15);
      }
      v11 |= 0x18u;
    }
  }
  *(_DWORD *)(a1 + 64) = v11;
  if ( v9 == 3 )
    ++LODWORD(stru_140E2ED08.ThreadListEntry.Flink);
  result = 1LL;
  *(_DWORD *)(a1 + 88) = (v2 & 4) != 0 ? 8 : 16;
  return result;
}
