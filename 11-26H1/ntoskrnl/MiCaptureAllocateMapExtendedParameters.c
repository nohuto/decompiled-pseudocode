/*
 * XREFs of MiCaptureAllocateMapExtendedParameters @ 0x1409EEE14
 * Callers:
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiMapViewOfSectionExCommon @ 0x1409EDD40 (MiMapViewOfSectionExCommon.c)
 *     MmAllocateVirtualMemory @ 0x1409EEA70 (MmAllocateVirtualMemory.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

__int64 __fastcall MiCaptureAllocateMapExtendedParameters(char *Address, unsigned int a2, char a3, int a4, _OWORD *a5)
{
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  SIZE_T v10; // rcx
  int v11; // r15d
  char *v12; // r12
  unsigned __int64 ULong64FromUser; // rax
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  unsigned __int64 v22; // rax
  __int128 v23; // [rsp+48h] [rbp-40h] BYREF
  __int64 v24; // [rsp+58h] [rbp-30h]

  v7 = a2;
  memset_0(a5, 0, 0x48uLL);
  if ( !(_DWORD)v7 )
    return Address != 0LL ? 0xC000000D : 0;
  if ( !Address )
    return 3221225485LL;
  v10 = 16 * v7;
  if ( is_mul_ok(v7, 0x10uLL) )
  {
    result = 0LL;
  }
  else
  {
    v10 = -1LL;
    result = 3221225621LL;
  }
  if ( (int)result >= 0 )
  {
    v11 = 0;
    if ( a3 )
      ProbeForWrite(Address, v10, 8u);
    v12 = &Address[16 * v7];
    while ( Address < v12 )
    {
      if ( a3 )
        ULong64FromUser = RtlReadULong64FromUser(Address);
      else
        ULong64FromUser = *(_QWORD *)Address;
      v14 = (unsigned __int8)ULong64FromUser;
      if ( !(_BYTE)ULong64FromUser || (unsigned __int8)ULong64FromUser >= 7u || ULong64FromUser >= 0x100 )
        return 3221225485LL;
      v15 = 1 << ULong64FromUser;
      if ( ((1 << v14) & a4) == 0 )
        return 3221225485LL;
      if ( (v15 & v11) != 0 )
        return 3221225485LL;
      v11 |= v15;
      if ( a3 )
        v16 = RtlReadULong64FromUser(Address + 8);
      else
        v16 = *((_QWORD *)Address + 1);
      v17 = v14 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              v21 = v20 - 1;
              if ( v21 )
              {
                if ( v21 != 1 )
                  return 3221225485LL;
                if ( (unsigned __int64)v16 > 0xFFFF )
                  return 3221225485LL;
                *((_WORD *)a5 + 25) = v16;
              }
              else
              {
                *((_QWORD *)a5 + 7) = v16;
                if ( (v16 & 0xFFFFFFFFFFFFFD45uLL) != 0 )
                  return 3221225485LL;
                if ( (v16 & 0x80u) != 0LL && a3 )
                  return 3221225659LL;
              }
            }
            else
            {
              *((_QWORD *)a5 + 5) = v16;
              *((_BYTE *)a5 + 48) = 1;
            }
          }
          else
          {
            *((_QWORD *)a5 + 3) = v16;
            if ( !v16 )
              return 3221225485LL;
          }
        }
        else
        {
          if ( (unsigned __int64)v16 > 0xFFFFFFFF )
          {
            v22 = v16;
            if ( v16 < 0 )
            {
              v16 &= ~0x8000000000000000uLL;
              *((_BYTE *)a5 + 49) = 1;
              v22 = v16;
            }
            if ( v22 > 0xFFFFFFFF )
              return 3221225485LL;
          }
          *((_DWORD *)a5 + 8) = v16;
          if ( (_DWORD)v16 == -1 )
            return 3221225485LL;
          *((_DWORD *)a5 + 8) = v16 + 1;
        }
      }
      else
      {
        v23 = 0LL;
        v24 = 0LL;
        if ( a3 )
        {
          if ( (v16 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          RtlCopyFromUser(&v23, (void *)v16, 0x18uLL);
        }
        else
        {
          RtlCopyVolatileMemory(&v23, (const void *)v16, 0x18uLL);
        }
        *a5 = v23;
        *((_QWORD *)a5 + 2) = v24;
      }
      Address += 16;
    }
    *((_DWORD *)a5 + 13) = v11;
    return 0LL;
  }
  return result;
}
