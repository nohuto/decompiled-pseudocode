/*
 * XREFs of PiControlGetRelatedDevice @ 0x140969210
 * Callers:
 *     <none>
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x1409675B8 (PiControlCopyUserModeCallersBuffer.c)
 *     PiGetRelatedDevice @ 0x140969420 (PiGetRelatedDevice.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetRelatedDevice(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // ax
  void *Pool2; // rbx
  int v8; // ecx
  void *v9; // r15
  unsigned int v10; // edi
  int RelatedDevice; // edi
  unsigned int v12; // r8d
  PVOID v14; // rax
  void *v15; // rcx
  int v16; // eax
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+38h] BYREF

  v4 = *a2;
  *(_OWORD *)P = 0LL;
  WORD1(P[0]) = v4;
  LOWORD(P[0]) = v4;
  if ( v4 && v4 <= 0x190u && (v4 & 1) == 0 )
  {
    Pool2 = (void *)*((_QWORD *)a2 + 3);
    P[1] = 0LL;
    if ( Pool2 && (v8 = *((_DWORD *)a2 + 8)) != 0 )
    {
      v18 = 2 * v8;
      if ( 2 * v8 )
      {
        if ( a4 )
        {
          Pool2 = (void *)ExAllocatePool2(0x101uLL);
          if ( !Pool2 )
          {
            RelatedDevice = -1073741670;
            goto LABEL_21;
          }
          v4 = (unsigned __int16)P[0];
        }
LABEL_8:
        v9 = (void *)*((_QWORD *)a2 + 1);
        v10 = v4;
        if ( a4 )
        {
          if ( v4 )
          {
            v14 = (PVOID)ExAllocatePool2(0x101uLL);
            P[1] = v14;
            if ( !v14 )
            {
              RelatedDevice = -1073741670;
              goto LABEL_22;
            }
            RelatedDevice = PiControlCopyUserModeCallersBuffer(v14, v9, v10, 2, a4, 1);
            if ( RelatedDevice < 0 )
            {
              ExFreePoolWithTag(P[1], 0);
              v14 = 0LL;
              P[1] = 0LL;
LABEL_22:
              if ( v14 )
                ExFreePoolWithTag(v14, 0);
              if ( Pool2 )
                ExFreePoolWithTag(Pool2, 0);
              return (unsigned int)RelatedDevice;
            }
          }
        }
        else
        {
          P[1] = *((PVOID *)a2 + 1);
        }
        RelatedDevice = PiGetRelatedDevice(P, Pool2, &v18, *((unsigned int *)a2 + 4));
        if ( Pool2 )
        {
          v12 = 2 * *((_DWORD *)a2 + 8);
          if ( a4 )
          {
            if ( v12 )
            {
              v15 = (void *)*((_QWORD *)a2 + 3);
              if ( v15 )
              {
                v16 = PiControlCopyUserModeCallersBuffer(v15, Pool2, v12, 2, a4, 0);
                if ( v16 < 0 )
                  RelatedDevice = v16;
              }
            }
            else
            {
              *((_QWORD *)a2 + 3) = 0LL;
            }
          }
          else
          {
            *((_QWORD *)a2 + 3) = Pool2;
          }
        }
        *((_DWORD *)a2 + 8) = v18 >> 1;
        if ( !a4 )
          return (unsigned int)RelatedDevice;
LABEL_21:
        v14 = P[1];
        goto LABEL_22;
      }
    }
    else
    {
      v18 = 0;
    }
    Pool2 = 0LL;
    goto LABEL_8;
  }
  return 3221225485LL;
}
