/*
 * XREFs of ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140121B28
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x14009F5B4 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEB.c)
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(
        CMouseProcessor::MouseInputDataEx *this,
        struct tagINPUT_MESSAGE_SOURCE *a2)
{
  __int16 v2; // ax
  int v3; // eax

  if ( *((_DWORD *)this + 22) == 1 || *((_DWORD *)this + 22) == 2 )
  {
    *(_DWORD *)a2 = 2;
    goto LABEL_15;
  }
  if ( (unsigned int)(*((_DWORD *)this + 22) - 3) < 2 )
  {
    *(_DWORD *)a2 = 0;
LABEL_15:
    *((_DWORD *)a2 + 1) = 4;
    return;
  }
  v2 = *((_WORD *)this + 1);
  if ( (v2 & 0x10) != 0 )
  {
    *(_DWORD *)a2 = 4;
  }
  else if ( (v2 & 0x40) != 0 )
  {
    *(_DWORD *)a2 = 8;
  }
  else if ( (v2 & 0x80u) != 0 )
  {
    *(_DWORD *)a2 = 18;
  }
  else
  {
    *(_DWORD *)a2 = (v2 & 0x200 | 0x20u) >> 4;
  }
  v3 = *((_DWORD *)this + 18);
  if ( (v3 & 0x40) != 0 )
  {
    *((_DWORD *)a2 + 1) = 1;
  }
  else if ( (v3 & 0x10) != 0 )
  {
    *((_DWORD *)a2 + 1) = 2;
  }
  else
  {
    *((_DWORD *)a2 + 1) = 0;
  }
}
